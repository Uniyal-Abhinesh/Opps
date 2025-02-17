#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    void display() 
    {
     cout<<(hours<10?"0":"")<<hours<<":"<<(minutes<10?"0":"")<<minutes<<":"<<(seconds<10?"0":"")<<seconds<<endl;
    }
    Time add(Time &t1,Time &t2) 
     {
        Time result;
        result.seconds = (t1.seconds + t2.seconds);
        result.minutes = (t1.minutes + t2.minutes + result.seconds / 60);
        result.hours = (t1.hours + t2.hours + result.minutes / 60);
        result.seconds %= 60;
        result.minutes %= 60;
        result.hours %= 24; // Assuming a 24-hour clock
        return result;
    }
};

int main() {
    Time t1(11, 59, 50); 
    Time t2(0, 0, 15);   
    Time t3 = t3.add(t1,t2);
    cout << "Resulting Time: ";
    t3.display();
    return 0;
}
