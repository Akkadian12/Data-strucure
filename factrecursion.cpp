#include <iostream>
#include <stdio.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }
    
}
int main()
{
    int fact,f;
    cout<<"enter the number to find factorial"<<endl;
    cin>>f;
    fact=factorial(f);
    printf("%d",fact);
    return 0;
}