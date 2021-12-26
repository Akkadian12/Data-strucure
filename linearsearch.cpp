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
        cout<<arr.A[i]<<" ";
    }
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct Array *arr,int k)
{
    int i;
    for(int i=0;i<arr->length;i++)
    {
        if(k==arr->A[i] )
        {
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
        
    }
    return -1;
}
int main()
{
    struct Array arr1={{10,20,30,12,34},10,5};
    
    cout<<"key element fount at index "<<linearsearch(&arr1,34)<<endl;
    display(arr1);
    return 0;
}