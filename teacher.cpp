// //objects are real world entities
// class is  blue print of objects
//  if we want to give the acces of the private members we cannot give the value directly otherwise it will give error
//Constructor are special method invoked automatically at time of object creation 
#include<iostream>
#include<string>
using namespace std;
class teacher
{
private:
    
public:
// \\non-paratermeterised constructor
// teacher()
// {
//     cout<<"hello\n";
// }
//paratermeterised constructor
//teacher(string n,string d,double s)
//{
  //  name=n;
    //dept=d;
    //salary=s;
//}
//THIS Pointer points to the current object 
teacher(string name,string dept,double salary)
{
   this-> name=name;
    this->dept=dept;
    this->salary=salary;
}
// custom copy constructor
teacher(teacher &t2)
{
    this->name=t2.name;
    this->dept=t2.dept;
    this->salary=t2.salary;

}
string name;
string dept;
double salary;
 void changedept( string newdept)
 {
    dept=newdept;
 }
 void setsalary(double s)
 {
    salary=s;
 }
 double getsalary()
 {
    return salary;
 }
 void getinfo()
 {
    cout<<name<<endl;
    cout<<salary<<endl;
    cout<<dept<<endl;
 }
 ~teacher()
 {
   cout<<"hi i am destructor"<<endl;
 }
};
int main()
{ double s;
    teacher t1("Abhi","cse",23000);
   /// t1.getinfo();
   teacher t2(t1);//Copy constructor it will copy the properties  from the obj t1 and will also stre it int2.getinfo();
   t2.getinfo();
    return 0;
}
