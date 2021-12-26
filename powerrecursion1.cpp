#include <iostream>
#include <stdio.h>
using namespace std;
int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m,(n-1)/2);   
    }
    
}
int main()
{
    int m,n;
    cout<<"enter the value of m and n"<<endl;
    cin>>m>>n;
    int result=pow(2,9);
    cout<<result<<endl;
    return 0;
}