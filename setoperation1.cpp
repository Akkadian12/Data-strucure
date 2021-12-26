#include <iostream>
#include <stdio.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

struct Array* unionofarray(struct Array* arr1,struct Array* arr2)
{
    int i=0;
    int j=0;
    int k=0;
    struct Array*arr3=new struct Array();
    while(i<arr1->length&&j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i];
            i++;
        }
        else if(arr1->A[i]>arr2->A[j])
        {
            arr3->A[k++]=arr2->A[j];
            j++;
        }
        else
        {
            arr3->A[k++]=arr1->A[i];
            i++;
            j++;
        }
    }
        for(;i<arr1->length;i++)
        {
            arr3->A[k++]=arr1->A[i];
        }
        for(;j<arr2->length;j++)
        {
            arr3->A[k++]=arr2->A[j];
        }
        arr3->length=arr1->length+arr2->length;
        arr3->size=10;
        return arr3;
}

int main()
{
    struct Array arr1={{2,4,6,8},10,4};
    struct Array arr2={{1,3,4,6,9,12},10,6};
    struct Array* arr3=unionofarray(&arr1,&arr2);
    display(*arr3);

    return 0;
}
