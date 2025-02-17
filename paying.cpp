// Imagine a tollbooth with a class called TollBooth. 
// The two data items are of type unsigned int and double to hold the total number of cars and total amount of money collected.
//  A constructor initializes both of these data members to 0. A member function called payingCar() increments the car total and 
// adds 0.5 to the cash total. Another function called nonPayCar( ) increments the car total but adds nothing to the cash total. 
// Finally a member function called display( )shows the two totals. Include a program to test this class.
//  This program should allow the user to push one key to count a paying car and another to count a non paying car. 
// Pushing the ESC key should cause the program to print out the total number of cars and total cash and then exit.
#include<iostream>
using namespace std;
class tollbooth
{
    unsigned int totalcars;
    double totalamount;
    public:
    tollbooth()
    {
        totalcars=0;
        totalamount=0.0;
    }
    void payingcar()
    {
       totalcars++;
       totalamount+=0.5;

    }
    void nonpaycar()
    {
        totalcars++;
    }
    void display()
    {
        cout<<"no of cars:"<<totalcars<<endl;
        cout<<"cash : $"<<totalamount<<endl;

    }
};
int main()
{   tollbooth boot;
    char ch;
    cout<<"enter your choice : \n"<<endl;
    while(true)
    {   cin>>ch;
        if(ch=='n')
        {
            boot.nonpaycar();
        }
        else if(ch=='p')
        {
            boot.payingcar();
        }
        else if(ch=='e')
        {
            boot.display();
            break;
        }
        
        

    }
    return 0;
}