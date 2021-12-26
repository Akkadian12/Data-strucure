#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void fun(int* p,int n)
{
    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    p[0]=45;
}
int main()
{
    int A[]={23,4,5,6,6};
    fun(A,5);//arrays are always pass by address name of array is address of first element in array    
    for(int x:A)
    {
        cout<<x<<endl;
    } 
    return 0;
}