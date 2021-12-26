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
struct Array* mergesorted(struct Array* arr,struct Array* arr1)
{
    int i=0;
    int j=0;
    int k=0;
    struct Array *arr2=new struct Array();
    while(i<arr->length&&j<arr1->length)
    {
        if(arr->A[i]<arr1->A[j])
        {
            arr2->A[k++]=arr->A[i++];
        }
        else
        {
            arr2->A[k++]=arr1->A[j++];
        }
        
    }
    for(;i<arr->length;i++)
    {
        arr2->A[k++]=arr->A[i];
    }
    for(;j<arr1->length;j++)
    {
        arr2->A[k++]=arr->A[j];
    }
    arr2->length=arr->length+arr1->length;
    arr2->size=10;
    return arr2;
}
int main()
{
    struct Array arr1={{2,4,6,8,10},10,5};
    struct Array arr2={{1,3,5,7,9},10,5};
    struct Array* arr3=mergesorted(&arr1,&arr2);
    for(int i=0;i<arr3->length;i++)
    {
        cout<<arr3->A[i]<<" ";
    }
    return 0;
}