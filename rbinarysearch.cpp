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
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
int rbinarysearch(struct Array arr,int key,int l,int h)
{
int mid;
if(l<=h)
{
    mid=(l+h)/2;

if(key==arr.A[mid])
{
    return mid;
}
else 
{
    if(key<arr.A[mid])
    {
        return rbinarysearch(arr,key,l,mid-1);
    }
    else
    {
        return rbinarysearch(arr,key,mid+1,h);
    }
    
}
}
return -1;
    
}
int main()
{
    struct Array arr1={{10,21,3,8,9,11,12,18,14},10,9};
    int x=rbinarysearch(arr1,7,0,8);
    if(x==-1)
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"elemetn found at "<<x<<endl;
    }
    return 0;
    
}