#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    int roll_no;

};
class teacher
{
    public:
    string subject;
    double salary;
};
class ta:public student,public teacher{
};
int main()
{
    ta s1;
    s1.name="Abhinesh_Uniyal";
    s1.subject="cse";
    cout<<s1.name<<endl;
    cout<<s1.subject<<endl;
    return 0;

}