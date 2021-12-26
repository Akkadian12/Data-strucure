#include <iostream>
#include <stdio.h>
using namespace std;

template<class T>
class rectangle
{
    private:
    T length;
    T breadth;
    public:
    rectangle(T l,T b);
    T area();
    T perimeter();
};
template<class T>
rectangle<T>::rectangle(T l,T b)
{
    this->length=l;
    this->breadth=b;
}
template<class T>
T rectangle<T>::area()
{
    return length*breadth;

}
template<class T>
T rectangle<T>::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    rectangle<int> a(5,10);
    cout<<a.area()<<endl;
    cout<<a.perimeter()<<endl;
    rectangle<float> b(12.5,10.53
    );
    cout<<b.area()<<endl;
    cout<<b.perimeter()<<endl;
    rectangle<double> c(12.5555,13.666666);
    
}
