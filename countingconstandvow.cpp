#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char greet[]="how are  you   akki bhai";
    int i,vcount=0,ccount=0,scount=0;
    for( i=0;greet[i]!='\0';i++)
    {
        if(greet[i]=='a'||greet[i]=='e'||greet[i]=='o'||greet[i]=='u'||greet[i]=='i'||greet[i]=='A'||greet[i]=='E'||greet[i]=='I'||greet[i]=='O'||greet[i]=='U')
        {
            vcount++;
        }
        else if(greet[i]>=65&&greet[i]<=90||greet[i]>=97&&greet[i]<=122)
        {
            ccount++;
        }
        if(greet[i]==' '&&greet[i-1]!=' ')
        {
            scount++;
        }
    }
    cout<<"no of vowel in string is"<<vcount<<endl;
    cout<<"no of consonants in string is"<<ccount<<endl;
    cout<<"no of words "<<++scount<<endl;
    
    return 0;
}