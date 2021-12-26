#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a=10;
    int &r=a;
    cout<<r<<endl;
    r=24;
    cout<<a<<endl;
    return 0;
}