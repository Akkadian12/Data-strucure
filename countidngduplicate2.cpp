// finding duplicate and counting in unsorted array
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int count;
    int A[10]={8,5,6,4,7,5,6,8,4,7};
    for(int i=0;i<10;i++)
    {
        count=1;
        if(A[i]!=-1)
        {
            for(int j=i+1;j<10;j++)
            {
                if(A[j]==A[i])
                {
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1)
            {
                printf("%d is appeared %d timess",A[i],count);
                printf("\n");
            }
        }
    }
    return 0;
}