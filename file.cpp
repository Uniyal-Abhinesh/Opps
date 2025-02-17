#include<iostream>
#include<fstream>
using namespace std;
int main()
 { string name;
  string content;
 cout<<"Enter your name";
 cin>>name;
  ofstream out("sample.txt");
  out<<"hi my name is "+name;
  out.close();
ifstream in("sample.txt");
getline(in,content);
in>>content;
cout<<"the content of the file is : "<<content;
in.close();
return 0;
}


