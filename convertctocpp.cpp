#include <iostream>
#include <stdio.h>
using namespace std;
class Array
{
    private:
    int* A;
    int size;
    int length;
    public:
    Array()
    {
        size=10;
        A=new int[10];
        length=0;
    }
    Array(int sz)
    {
        size=sz;
        A=new int[sz];
        length=0;
    }
    void display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<A[i]<<" ";
        }
    }
    void swap(int& x,int& y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
    void insert(int index,int x)
    {
        int i;
        for( i=length-1;i>=index;i--)
        {
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
    int Delete(int index)
    {
        int x=0;
        x=A[index];
        for(int i=index;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        length--;
        return x;
    }
    void Reverse()
    {
        int i=0;
        int j=length-1;
        while(i<j)
        {
            swap(A[i],A[j]);
            i++;
            j--;
        }
    }
};
int main()
{
    int ch;
    int index;
    int x;
    Array arr1;
    do{
    cout<<"Welcome to array operation"<<endl;
    cout<<"choose any option"<<endl;
    cout<<"1. insert"<<endl;
    cout<<"2. delete"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. reverse"<<endl;
    cout<<"5. Quit"<<endl;
    cout<<"enter you choice"<<endl;
    cin>>ch;
    
    
    switch(ch)
    {
        case 1:
        cout<<"enter the value of index and value"<<endl;
        cin>>index>>x;
        arr1.insert(index,x);
        break;
        case 2:
        cout<<"enter the index where you want ot delete element"<<endl;
        cin>>index;
        x=arr1.Delete(index);
        break;
        case 3:
        cout<<"your array is"<<endl;
        arr1.display();
        break;
        case 4:
        arr1.Reverse();
        cout<<"after reversing"<<endl;
        arr1.display();
        cout<<endl;
        break;
        case 5:
        cout<<"please confirm you are going to quit"<<endl;
        int respo;
        cin>>respo;
        if(respo==1)
        {
            exit(0);
        }
        break;

    }

    }while(ch<6);
    return 0;
}