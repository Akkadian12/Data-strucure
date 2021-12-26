#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Array{
    private:
    int* A;
    int size;
    int length;
    public:
    Array()
    {
        A=new int[10];
        size=10;
        length=0;
    }
    void setelement()
    {
        int l;
        cout<<"how many element you want to enter but less than 10"<<endl;
        cin>>l;
        length=l;

        for(int i=0;i<length;i++)
        {
            cin>>A[i];
        }
    }
    void findmissing()
    {
        int l=A[0];
        int h=A[length-1];
        int diff=l;
        int i;
        for(i=0;i<length;i++)
        {
            if(A[i]-i!=diff)
            {
                while(diff<A[i]-i)
                {
                    cout<<"missing element is"<<diff+i<<endl;
                    diff++;
                }
            }
        }
    }
};
int main()
{
    Array arr1;
    arr1.setelement();
    arr1.findmissing();
    return 0;
}