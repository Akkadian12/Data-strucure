#include <iostream>
using namespace std;
int main()
{
    int A[4]={3,5,6,8};
    int B[]={5,5,2,5,0,9,57,23,9};
    // A[0]=43;
    // A[1]=44;
    // A[2]=23;
    // A[3]=33;
    for(int x:A)
    {
        cout<<x<<endl;
    }
    for(int i=0;i<10;i++)
    {
        cout<<B[i]<<endl;
    }
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    return 0;
}