#include<iostream>
using namespace std;
class complex
{
   public:
   int a,b;
   void set(int n1,int n2)
   {
    a=n1;
    b=n2;
   }
   friend complex sumcomplex(complex o1,complex o2);
   void get()
   {
    cout<<"The sum of your given number is : "<<a<<" + "<<b<<"i"<<endl;
   }
};
 complex sumcomplex(complex o1,complex o2)
 {
    complex o3;
    o3.set((o1.a+o2.a),(o1.b+o2.b));
    return o3;
 }
int main()
{
    complex c1,c2,sum;
    c1.set(1,4);
    c2.set(5,8);
    c1.get();
    c2.get();
    sum=sumcomplex(c1,c2);
    sum.get();
    return 0;
}