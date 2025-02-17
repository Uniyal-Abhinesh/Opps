#include<iostream>
#include<string>
using namespace std;
class person
{
    public:
    string name;
    int age;
     person(string name,int age)
     {
         this->name=name;
         this->age=age;
     }
};
//Here inheritence occured as the class student inherited the properties from the class person
class student: public person 
{
  public:
  student(string name,int age,int roll_no):person(name,age)
  {
    this->roll_no=roll_no;
  }
  int roll_no;
  void getinfo(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"roll no  : "<<roll_no<<endl;
  }
};
int main()
{
    student s1 ("Abhinesh",18,1);
    s1.getinfo();
    return 0;
}