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
void insert(struct Array* arr,int x)
{
    int i=arr->length-1;
    while(arr->A[i]>x)
    {
       arr->A[i+1]=arr->A[i];
        i--;
    }
   arr->A[i+1]=x;
   arr->length++;

}
int main()
{
    struct Array arr1={{2,5,6,8,10,12,16,20},10,8};
    insert(&arr1,7);
    display(arr1);
    return 0;
}