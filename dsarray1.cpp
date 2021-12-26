#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int *p;
    p=new int[5];//array created in heap
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    cout<<"Entered array is"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    free(p);
    p=NULL;
    cout<<endl;
    return 0;
}