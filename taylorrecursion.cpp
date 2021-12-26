#include <iostream>
#include <stdio.h>
using namespace std;
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    else
    {
        p*=x;
        f*=n;
        r=e(x,n-1);
        return r+(p/f);
    }
    
}
int main()
{
    int x,n;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter ehe value of n"<<endl;
    cin>>n;
    cout<<e(x,n)<<endl;
    return 0;
}