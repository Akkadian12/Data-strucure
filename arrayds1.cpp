#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int *p;
    p= new int [5];
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    delete[] p;
    p=NULL;
    cout<<(*p)<<endl;
    return 0;

}