#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    // struct Rectangle r={10,5};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;
    // Rectangle *a=&r;
    // cout<<a->length<<endl;
    // cout<<a->breadth<<endl;
    Rectangle *p;
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));//or new Rectangle;
    p->length=12;
    p->breadth=33;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}