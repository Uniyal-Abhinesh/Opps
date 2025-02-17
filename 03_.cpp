#include<iostream>
#include<string>
using namespace std;
class student {
    public:
    string name;
    double * cgpaptr;
student (string name,double cgpa)
    this->name=name;
    cgpaptr=new double;
    cgpaptr=cgpa;
    void getinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }
};
int main()
{
    student s1("ABHI",9.8);
    s1.getinfo();
    return 0;
}