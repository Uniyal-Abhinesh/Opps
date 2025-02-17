#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st;
    ofstream out;
    out.open("sample2.txt");
    out<<"hi \n";
    out<<"ny name is  \n";
    out<<"Abhinesh \n";
    out.close();
    ifstream in;
    in.open("sample2.txt");
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;

}
