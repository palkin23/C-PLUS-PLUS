/* Create a structure Time with hours, minutes, seconds. Add two 
time objects and display the result.*/
#include<iostream>
using namespace std;
struct Time{
int hours;
int minutes;
int seconds;
};
int main(){

struct Time t1={9,19,20};
    struct Time t2={11,11,11};
    cout<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds<<"\n";
    cout<<t2.hours<<":"<<t2.minutes<<":"<<t2.seconds<<endl;
    return 0;

}