//finding a pair of element with sum k in unsorted array using hashing
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    int H[17]={0};
    for(int i=0;i<10;i++)
    {
        if(H[10-A[i]]!=0&&10-A[i]>0)
        {
            
            printf("%d+%d=%d",A[i],10-A[i],10);
            cout<<endl;
        }
        H[A[i]]++;
    }
    return 0;
}