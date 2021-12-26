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
void positiveonright(struct Array* arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0){i++;}
        while(arr->A[j]>=0){j--;}
        if(i<j)
        swap(arr->A[i],arr->A[j]);
    }
}
int main()
{
    struct Array arr1={{-3,-2,-5,7,9,5,-3,4,-3},10,9};
    positiveonright(&arr1);
    display(arr1);
    return 0;
}