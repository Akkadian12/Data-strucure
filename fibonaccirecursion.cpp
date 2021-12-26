#include <iostream>
#include <stdio.h>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    { 
        return fib(n-2)+fib(n-1);   
    }
    
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int result=fib(n);
    cout<<result<<endl;
    return 0;
}