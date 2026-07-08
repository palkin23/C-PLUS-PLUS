/*. Pass a structure to a function and modify its values. Demonstrate call by value and
call by reference.*/
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll;
};
void value(Student s)
{
    s.roll = 12;
    
}
void refrence(Student &s)
{
    s.roll = 11;
}
int main()
{
    Student s1 = {"Palkin", 1};
    cout << "Pass Structure by Value into a function" << endl;
    value(s1);
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Pass Structure by Refrence into a function" << endl;
    refrence(s1);
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    return 0;
}