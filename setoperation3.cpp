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

struct Array* diffrenceofarray(struct Array* arr1,struct Array* arr2)
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
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
        for(;i<arr1->length;i++)
        {
            arr3->A[k++]=arr1->A[i];
        }
        // for(;j<arr2->length;j++)
        // {
        //     arr3->A[k++]=arr2->A[j];
        // }
        arr3->length=arr1->length;
        arr3->size=10;
        return arr3;
}

int main()
{
    struct Array arr1={{3,4,8,9,12,13,15,20},10,8};
    struct Array arr2={{5,7,10,13,15},10,5};
    struct Array* arr3=diffrenceofarray(&arr1,&arr2);
    display(*arr3);

    return 0;
}
