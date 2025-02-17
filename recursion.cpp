//recursive function
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*factorial(n-1);

}
int main()
{
    int a ;
    cout<<"Enter the value of the number : "<<endl;
    cin>>a;
    cout<<"The factorial of the number "<<a<<"is : "<<factorial(a)<<endl;
    return 0;
}