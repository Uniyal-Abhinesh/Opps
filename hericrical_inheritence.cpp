//hericary inheritence allows us to create multiple children of a single parent ie multiple classes can inherit the properties of similar class 
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
class teacher:public person{
 public:
 string subject;
};
int main()
{
    teacher s1;
    student s2;
    s1.name="Abhinesh_Uniyal";
    s1.age=18;
    s2.roll_no=1;
    s1.subject="CSE";
    cout<<s1.name<<endl;
    cout<<s2.roll_no<<endl;
    return 0;

}