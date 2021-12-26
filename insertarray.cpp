#include <iostream>
#include <stdio.h>
using namespace std;
struct Array 
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
void insert(struct Array* arr,int index,int num)
{
    if(arr->size>arr->length)
    for(int i= arr->length;i>index;i--)
    {
        arr->A[i]=arr->A[i-1];
    }
    arr->A[index]=num;
    arr->length++;
}
int main()
{
    struct Array arr={{2,4,6,8,10},10,5};
    Display(arr);
    insert(&arr,3,15);
    Display(arr);
    return 0;
}