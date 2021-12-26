#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int* p,*q;
   p=(int *)malloc(5*sizeof(int));
   q=(int *)malloc(10*sizeof(int));
   p[0]=10;p[1]=20;p[2]=30;p[3]=40;p[4]=50;
   for(int i=0;i<5;i++)
   {
       q[i]=p[i];
   }
   
   p=q;
   q=nullptr;
   for(int i=0;i<10;i++)
   {
       cout<<p[i]<<endl;
   }
}