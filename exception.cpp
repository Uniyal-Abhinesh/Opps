#include<iostream>
#include<fstream>
using namespace std;
class customer
{
    string name;
    int acc,balance;
    public:
    customer(string nm,int acc,int balance)
    {
        this->name=nm;
        this->acc=acc;
        this->balance=balance;
    };
    void deposit(int amount)
    {
        if(amount>0)
        {
            cout<<"deposited sucesufully";
            balance+=amount;
            cout<<balance;
        }
    }
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<"debited"<<amount;
        }
    }
};
int main()
{
    customer c("abhi",1,5000);
    c.deposit(2300);
    return 0;
}