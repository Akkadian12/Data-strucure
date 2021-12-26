#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int area(Rectangle* r)
{
    int temp;
    temp=r->length*r->breadth;
    r->length++;
    r->breadth++;
    return temp;
}
int main()
{
    struct Rectangle r1={10,8};
    cout<<area(&r1)<<endl;
    cout<<area(&r1)<<endl;
    return 0;
}