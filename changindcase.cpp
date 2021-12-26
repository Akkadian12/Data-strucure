#include <iostream>
#include <stdio.h>
using namespace std;
// toggle charter of string
int main()
{
    char A[]="W5LcOmE";
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]>=65&&A[i]<=90)
        {
            A[i]+=32;
        }
        else if(A[i]>=97&&A[i]<=122)
        {
            A[i]-=32;
        }
    }
    cout<<A<<endl;
    return 0;
}