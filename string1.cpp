#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char A[]="welcome";
    int i;
    for( i=0;A[i]!='\0';i++)
    {
        printf("%c",A[i]);
        
    }
    cout<<endl;
    cout<<"length of array is "<<i<<endl;
    char name[20];
    gets(name);//get s is used for getting input in more than one words
    cout<<"hello ";
    for( i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
        
    }
    cout<<endl;
    return 0;
}