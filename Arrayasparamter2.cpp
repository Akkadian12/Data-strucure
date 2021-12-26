#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int *fun(int size)
{
    int *p;
    p=(int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    return p;
}
int main()
{
    int *ptr;
    ptr=fun(5);
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}