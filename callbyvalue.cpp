#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{ 
    int a,b;
    a=20;
    b=10;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
    //you can not swap value because a fuction can not access data memberof another function directly
}