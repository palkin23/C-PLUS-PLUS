/* Create a structure Employee with id, name, and salary. Find the
employee with the highest salary.*/
#include <iostream>
using namespace std;
struct Employee
{
    string name;
    int id;
    double salary;
};
int main()
{
    struct Employee e1 = {"Ravi", 1234, 800000};
    struct Employee e2 = {"Kishan", 1235, 8100000};
    struct Employee e3 = {"Dubey", 1236, 8200000};
    Employee highest;   //we created a variable with data type employee only
    if (e1.salary > e2.salary && e1.salary > e3.salary)
    {
        highest = e1;
    }
    else if (e2.salary > e1.salary && e2.salary > e3.salary)
    {
        highest = e2;
    }
    else
    {
        highest = e3;
    }
    cout << "Employee with highest salary:" << endl;
    cout << "Name: " << highest.name << "\n";
    cout << "Id: " << highest.id << "\n";
    cout << "Salary: " << highest.salary << endl;

    return 0;
}