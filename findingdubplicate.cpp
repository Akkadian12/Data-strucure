#include <iostream>
using namespace std;
int main()
{
    int A[10]={3,6,8,8,10,12,15,15,20};
    int lastduplicate=0;
    for(int i=0;i<9;i++)
    {
        if(A[i]==A[i+1])
        {
            if(lastduplicate!=A[i])
            {
                cout<<"duplicate element is"<<A[i]<<endl;
                lastduplicate=A[i];
            }
        }
    }
    return 0;
}