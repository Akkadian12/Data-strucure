#include <iostream>
using namespace std;
int validate(char* name)
{
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65&&name[i]<=90||name[i]>=97&&name[i]<=122||name[i]>=48&&name[i]<=57)
        {
            
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    char* name="Ani^134";
    if(validate(name))
    {
        cout<<"valid "<<endl;
    }
    else
    {
        cout<<"invalid "<<endl;
    }
    return 0;
}