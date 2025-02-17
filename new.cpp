#include<iostream>
using namespace std;
class teacher{
    private:
    int salary;
    public:
    string name,dept;
    teacher(string nm,string dep,int sal)
    {
       this->name=nm;
       this->dept=dep;
        this->salary=sal;
    }
    
    void get()
    {
        cout<<"name:"<<name<<endl;
        cout<<"dept:"<<dept<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main()
{
    teacher t1("ABHI","CS",4000);
    // t1.get();
    teacher t2(t1);
    t2.get();
    return 0;
}