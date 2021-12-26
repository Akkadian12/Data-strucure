#include <iostream>
#include <stdio.h>
using namespace std;
int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return m*pow(m,n-1);
    }
}
int main()
{
    int m,n;
    cout<<"enter the value of m and n"<<endl;
    cin>>m>>n;
    int result=pow(m,n);
    cout<<result<<endl;
    return 0;
}