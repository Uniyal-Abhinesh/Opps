// is the ability of object to take different forms depending on the context in which they are used
#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    student()
    {
        cout<<"non parameterised constructor\n";

    }
    student(string name)
    {
        this->name=name;
    }
    void getinfo()
    {
        cout<<"The name of the student is :"<<name<<endl;
    }  
   
};
int main()
{
   student s1("ABHINESH");
   s1.getinfo();
   return 0;
   
}