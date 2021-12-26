#include <iostream>
using namespace std;
int main()
{
    int A[10]={7,5,17,3,14,10,16,9,13,6};
    int H[18]={0};
    for(int i=0;i<10;i++)
    {
        H[A[i]]++;
    }
    for(int i=3;i<18;i++)
    {
        if(H[i]==0)
        {
            cout<<"missing number is "<<i<<endl;
        }
    }
    
}