/*17. Create a structure Student and dynamically allocate memory
 using pointer to  structure*/
#include <iostream>
#include <cstdlib>
using namespace std;
struct Student
{
    string name;
    int roll;
};
int main()
{
    struct Student *ptr;                                // POINTER OF STRUCTURE
    ptr = (struct Student *)calloc(2, sizeof(Student)); // DMA
    cout << "Enter Name and Roll No." << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> ptr[i].name;
        cin >> ptr[i].roll;
    }
    cout << "Student Details:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Name: " << ptr[i].name << "\t";
        cout << "Roll No." << ptr[i].roll << endl;
    }
    free(ptr);
}