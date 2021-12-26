#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char A[]="painTer";
    char B[]="PBinter";
    int i,j;
    for( i=0, j=0;A[i]!='\0'&&B[i]!='\0';i++,j++)
    {
        if(A[i]==B[j]||A[i]==B[j]+32||A[i]==B[j]-32)
        {
            cout<<"";
            
        }
        else if(A[i]<B[j])
        {
            cout<<"first string is smaller than second"<<endl;
            exit(0);
        }
        else
        {
            cout<<"first string is greater than second"<<endl;
            exit(0);
        }
    
    }
    cout<<"both string are equal"<<endl;
    return 0;
}