#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int t1=0,t2=1,t3;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<t1<<" "<<t2<<" ";
    for(int i=2;i<n;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3<<" ";
    }
    return 0;
}