//single inheritence
//multiple inheritence as person passed its properties to student and student to gradstudents
//
#include<iostream>
#include<string>
using namespace std;
class person
{
    public:
    string name;
    int age;

};
class student:public person
{
    public:
    int roll_no;
};
class gradstudent:public student{
 public:
 string reasearch_area;
};
int main()
{
    gradstudent s1;
    s1.name="Abhinesh_Uniyal";
    s1.age=18;
    s1.roll_no=1;
    s1.reasearch_area="CSE";
    cout<<s1.reasearch_area<<endl;
    cout<<s1.name<<endl;
    return 0;

}