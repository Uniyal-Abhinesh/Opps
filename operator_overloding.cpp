#include<iostream>
using namespace std;
class POSTDIC{
        int a;
        public:
        void setnum(int b)
        {
            a=b;
        }
        void getnum()
        {
            cout<<a<<endl;
        }
        POSTDIC operator--()
        {
            a=a-1;
        }

};
int main()
{
    int n;
    POSTDIC m;
    m.setnum(4);
    --m;
    m.getnum();
   return 0;


}
// static int count=1
// int classname ::count