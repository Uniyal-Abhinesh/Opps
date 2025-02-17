// Define a class Hotel in C++ with the following specifications
// Private members
// • Rno Data member to store room number
// • Name Data member to store customer name
// • Tariff Data member to store per day charges
// • NOD Data member to store number of days of stay
// • CALC() Function to calculate and return amount as NOD*Tariff ,and if the value of days* Tariff >10000,
// then total amount is 1.05* days*Tariff.
// Public members
// • Checkin() Function to enter the content Rno, Name, Tariff and NOD
// • Checkout() Function to display Rno, Name, Tariff,
// NOD and Amount (amount to be displayed by calling function) CALC()

#include<iostream>
#include<string>
using namespace std;
class hotel
{
 private:
 int Rno;
 string name;
 float tariff;
 int nod;
 float calc()
 {
    float amount=nod*tariff;
    if(amount>10000)
    {
        amount *=1.05;
    }
    return amount;
 }
 public:
 void checkin()
 {
    cout<<"Enter the room number : ";
    cin>>Rno;
    cout<<"Enter the name of the customer : ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter the charges per day : ";
    cin>>tariff;
    cout<<"Enter the number of days a  customer stayed in the Hotel : ";
    cin>>nod;
 }
 void checkout()
 {  cout<<"    CUSTOMERS DETAILS    "<<endl;
    cout<<"the room number : "<<Rno<<endl;
    cout<<"the name of the customer : "<<name<<endl;
    cout<<"the charges per day : "<<tariff<<endl;
    cout<<"the number of days a  customer stayed in the Hotel : "<<nod<<endl;
    cout<<"total amount the customer has to pay : "<<calc()<<endl;
 }


};
int main()
{
    hotel h;
    h.checkin();
    h.checkout();
    return 0;
}