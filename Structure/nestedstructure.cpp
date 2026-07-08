/* Create a structure Student containing another structure Address (nested
structure). Display complete details.*/
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll_no;
    struct Address
    {
        int house_no;
    } addr;
};
int main()
{
    struct Student s1;
    s1.name = "Raj";
    s1.roll_no = 12;
    s1.addr.house_no = 809;
    cout << "Name: " << s1.name << "\n";
    cout << "Roll no: " << s1.roll_no <<"\n";
    cout << "House no: " << s1.addr.house_no<<endl;
    return 0;
}