#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    int *p;
    float*a;
    char *b;
    string *x;
    double *d;
    
    struct Rectangle* ptr;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(d)<<endl;
    //important thing to there is pointer of any type consume same memorty that depend on the compiler irrespective of whose pointer they are.
    
    return 0;
}