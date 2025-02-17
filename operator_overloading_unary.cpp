#include<iostream>
using namespace std;
class Mark{
    int marks;
    public:
    void display()
    {
        cout<<marks;
    }
    Mark()
    {
        marks=0;
    }
    Mark(int marks)
    {
        this->marks=marks;
    }
    void operator++()
    {
        marks+=1;

    }
    friend void  operator--(Mark &obj);
};
void operator--(Mark &obj)
{
    obj.marks-=1;
}
int main()
{
    Mark m(6);
    --m;
    m.display();
    ++m;
    m.display();
    return 0;
    
}