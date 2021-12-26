#include <iostream>
using namespace std;
int main()
{
    int A[10]={3,6,8,8,10,12,15,15,15,20};
    int i,j;
    for(i=0;i<9;i++)
    {
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[j]==A[i])
            {
                j++;
            }
            printf("%d is appeared %d times",A[i],j-i);
            printf("\n");
            i=j-1;
        }
    }
    return 0;
}