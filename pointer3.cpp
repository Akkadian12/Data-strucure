#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p;
   // p=(int*)malloc(5*(sizeof(int)));//array of size 5 created in heap
    //malloc is fuction of stdlib library 
    p=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    delete [ ]p;
    //or free(p);
    return 0;
}