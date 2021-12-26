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
bool issorted(struct Array arr)
{
    for(int i=0;i<arr.length-2;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    struct Array arr1={{2,4,6,8,12,12,15,18,20},10,9};
    cout<<issorted(arr1)<<endl;
}