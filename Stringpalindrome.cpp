//checking palindrome
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    char A[]="kanak";
    char B[6];
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    if(strcmp(B,A)==0)
    {
        cout<<"given string is palindrome"<<endl;
    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }
    
    return 0;
}