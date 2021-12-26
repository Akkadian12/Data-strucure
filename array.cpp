#include <iostream>
#include <stdio.h>
using namespace std;

/*declaration 
int A[5];
int A[5]={2,4,6,8,10};
int A[5]={2,4};
int A[5]={0};
int A[]={2,4,5,6,8,10};*/
int main()
{
int A[5]={2,4,6,8,10};
for(int i=0;i<5;i++)
{
    printf("%d ",A[i]);
}
for(int i=0;i<5;i++)
{
    printf("%d ",i[A]);
}
printf("%d ",*(A+2));
}