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
    cout<<endl;
}
int binarysearch(struct Array arr,int key)
{
    int mid;
    int l=0;
    int h=arr.length-1;
   
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    return -1;
}
int main()
{
    struct Array arr1={{2,3,5,9,14,16,30},10,7};
    int x=binarysearch(arr1,2);
    if(x==-1)
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"key element found at "<<x<<endl;
    }
    return 0;

}