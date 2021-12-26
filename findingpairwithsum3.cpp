//finding pair with sum 10 in sorted array
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10]={1,3,4,5,6,8,9,10,12,14};
    int i=0;
    int j=9;
    while(i<j)
    {
        if(A[i]+A[j]==10)
        {
            printf("%d+%d=%d",A[i],A[j],10);
            printf("\n");
            i++;
            j--;
        }
        else if(A[i]+A[j]>10)
        {
            j--;
        }
        else
        {
            i++;
        }
        
    }
    return 0;
}