#include <iostream>
#include <stdio.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
int get(struct Array arr,int index)
{
    return arr.A[index];
}
void set(struct Array* arr,int index,int x)
{
    arr->A[index]=x;
}
int max(struct Array arr)
{
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        {
            max=arr.A[i];
        }
    }
    return max;
}
int min(struct Array arr)
{
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        {
            min=arr.A[i];
            
        }
    }
    return min;
}
int sum(struct Array arr)
{
    int s=0;
    for(int i=0;i<arr.length;i++)
    {
        s+=arr.A[i];
    }
    return s;
}
float average(struct Array arr)
{
    float avg=(float)sum(arr)/(float)arr.length;
    return avg;
}
int main()
{
    struct Array arr1={{10,8,7,9,12,18,16,22},10,8};
    cout<<max(arr1)<<endl;
    cout<<min(arr1)<<endl;
    cout<<get(arr1,4)<<endl;
    set(&arr1,7,34);
    display(arr1);
    cout<<endl;
    cout<<sum(arr1)<<endl;
    cout<<average(arr1)<<endl;

}