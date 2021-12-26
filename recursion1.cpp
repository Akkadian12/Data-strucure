#include <iostream>
using namespace std;
//proram for finding sum of n natural numbers using recursion
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else 
    {
        return sum(n-1)+n;
    }
}
int main()
{
    int total=sum(10);
    printf("%d",total);
    return 0;
}