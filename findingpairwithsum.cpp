//findding a pair of elements with sum k in unsorted array
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10]={6,3,8,10,16,7,5,2,7,14};
    for(int i=0;i<10;i++)
    {
        int lastduplicate=0;
        for(int j=i+1;j<10;j++)
        {
            if(A[i]+A[j]==10)
            {
               if(lastduplicate!=A[j])
               {
                printf("%d+%d=%d",A[i],A[j],10);
                printf("\n");
                lastduplicate=A[j];
               }
               
            }
        }
    }
    return 0;
}