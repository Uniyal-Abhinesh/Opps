#include<iostream>
using namespace std;
class student 
{
    public:
    int roll_no;
    // student(string name,int age,int roll_no):person(name,age)
    // {
    //     this->roll_no=roll_no;
    // }
    // void getinfo()
    // {
    //   cout<<name<<endl;
    //   cout<<age<<endl;
    //   cout<<roll_no<<endl;
    // }
};
class teacher
{
    public:
    string depat;
    int sal;
};
class ta:public student,public teacher
{
  public:
  string depat;
  void get()
  {
    cout<<roll_no<<endl;
    cout<<depat<<endl;
    cout<<sal<<endl;
  }
};
int main()
{
    ta s1;
    s1.roll_no=1;
    s1.depat="cs";
    s1.sal=5333;
    s1.get();

    return 0;
}