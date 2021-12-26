//Reversing strig using sigle array
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char A[10]="punnanhi";
    int i,j;
    for(j=0;A[j]!='\0';j++)
    {}
    j=j-1;
    for(i=0;i<j;j--,i++)
    {
        char temp;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    cout<<"After reversing "<<A<<endl;
    return 0;
}