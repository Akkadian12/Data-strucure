#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int area(Rectangle &r)
{
    int temp;
    temp=r.length*r.breadth;
    r.length++;
    r.breadth++;
    return temp;
}
int perimeter(Rectangle r)
{
    return 2*(r.length+r.breadth);
}
int main()
{
    struct Rectangle r={10,8};
    int Area= area(r);
    cout<<"area of rectangle  "<<Area<<endl;
    cout<<area(r)<<endl;
   
    return 0;
}