#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a;
    printf("Enter the value of a");
    cin>>a;
    int *ptr;//ptr contains the memorty address of variable of a
    ptr=&a;
    cout<<a<<endl;
    printf("using pointer %d\n %d\n",ptr,&a);
    return 0;
}