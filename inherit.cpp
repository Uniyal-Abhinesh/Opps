#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
    // person(string name,int age)
    // {
    //     this->name=name;
    //     this->age=age;
    // }
};
class student : public person
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
class gradstudent:public student
{
  public:
  string depat;
  void get()
  {
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<roll_no<<endl;
    cout<<depat<<endl;
  }
};
int main()
{
    gradstudent s1;
    s1.name="abhi";
    s1.age=18;
    s1.roll_no=1;
    s1.depat="cs";
    s1.get();

    return 0;
}