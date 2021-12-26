#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outfile("my.txt",ios::trunc);
    outfile<<"aakash"<<endl;
    outfile<<25<<endl;
    outfile<<"it"<<endl;
    outfile.close();
    return 0;
}