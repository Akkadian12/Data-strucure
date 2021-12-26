#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;//for character it is allocating 4 bytes but it is using 1 byte for character it will discard the padding memory
    //this happen because it is easy for machine to read in set of 4 bytes
};
 int main()
 {
     struct Rectangle r1={10,4};
     printf("%lu\n",sizeof(r1));
     cout<<r1.length<<endl;
     cout<<r1.breadth<<endl;
     return 0;
 }