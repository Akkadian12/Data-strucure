#include <iostream>
#include <stdio.h>
using namespace std;
int C(int n,int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    else
    {
        return C(n-1,r-1)+C(n-1,r);
    }
}
int main()
{
    int result=C(7,4);
    cout<<result<<endl;
    return 0;
}