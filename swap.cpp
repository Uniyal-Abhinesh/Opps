//the values of a nad b will remain same because a copy of a and b is passed as a parameter in the function 
//this is called call by value
#include<iostream>
using namespace std;
// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
void swap_pointer(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=4,b=5;
    cout<<"the value of a is : "<<a<<"The value of b is : "<<b<<endl;
    //swap(a,b);//this will not work
    swap_pointer(&a,&b);
    cout<<"the value of a is : "<<a<<"The value of b is : "<<b<<endl;
    return 0;
}