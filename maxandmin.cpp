//finding min and max in single scan in an array
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10]={5,8,3,4,6,2,10,7,-1,4};
    int min=A[0];
    int max=A[0];
    for(int i=0;i<10;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
        else if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"max value in array is"<<max<<endl;
    cout<<"min value in string is "<<min<<endl;

    return 0;
}