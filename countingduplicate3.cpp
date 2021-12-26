// finding duplicate in unsorted array using hash table in unsorted array
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10]={8,3,6,4,6,5,6,8,2,7};
    int H[9]={0};
    for(int i=0;i<10;i++)
    {
        H[A[i]]++;
    }
    for(int i=0;i<9;i++)
    {
        if(H[i]>1)
        {
            printf("%d is appeared %d times",i,H[i]);
            printf("\n");
        }
    }
    return 0;
}