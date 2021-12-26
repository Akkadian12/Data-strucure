#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[5]={2,4,5,11,12};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    //using pointer
    int *p;
    p=A;//it will act like memory address of first element in arrray
    //p is a pointer which can act as the name of an array
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

    return 0;
}