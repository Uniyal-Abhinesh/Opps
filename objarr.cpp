#include<iostream>
#include<vector>
#include<string>
using namespace std;
class student
{
    public:
    string nm,department,un;
    int roll_no;
    void set_data()
    {
        cout<<"enter the student name"<<endl;
        cin>>nm;
        cout<<"enter the roll no "<<endl;
        cin>>roll_no;
        cout<<"enter the department"<<endl;
        cin>>department;
        cout<<"enter the university name"<<endl;
        cin>>un;

    }
    void get_data()
    {
        cout<<nm<<"\t"<<roll_no<<"\t"<<department<<"\t"<<un<<"\t"<<endl;
    }
};
int main()
{   string d;
    int c=0;
    cout<<"enter the string to compare"<<endl;
    cin>>d;
    int n;
    cout<<"enter the no of students"<<endl;
    cin>>n;
    vector<student>student(n) ;
    for(int i=0;i<n;i++)
    {
        student[i].set_data();
    }
    for(int i=0;i<n;i++)
    {
        if(student[i].department==d)
        cout<<student[i].nm;
        cout<<student[i].roll_no;
    }
    for(int i=0;i<n;i++)
    {
        if(student[i].department==d)
        c++;
    }
   
    //  cout<<"Name \t roll_no.\t department\t University name \t"<<endl;
    //  for(int i=0;i<n;i++)
    //   {
    //   student[i].get_data();
    //   }
    //   cout<<c<<endl;
     return 0;

}