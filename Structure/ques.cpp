#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int roll_no;
    string degree;
    string hostel;
    double cgpa;
    void addDetails(Student s[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter name: " << endl;
            cin >> s[i].name;
            cout << "Enter Roll No: " << endl;
            cin >> s[i].roll_no;
            cout << "Enter Degree: " << endl;
            cin >> s[i].degree;
            cout << "Enter CGPA: " << endl;
            cin >> s[i].cgpa;
            cout << "Enter Hostel" << endl;
            cin >> s[i].hostel;
        }
    }

    void updateDetails(Student s[], int n)
    {
        cout << "Enter New Roll No : " << endl;
        cin >> roll_no;
        for (int i = 0; i < n; i++)
        {
            if (s[i].roll_no == roll_no)
            {
                cout << "Student Found successfully!" << endl;

                cout << "Enter name: " << endl;
                cin >> s[i].name;
                cout << "Enter Degree: " << endl;
                cin >> s[i].degree;
                cout << "Enter CGPA: " << endl;
                cin >> s[i].cgpa;
                cout << "Enter Hostel" << endl;
                cin >> s[i].hostel;
                cout << "Details Updated Successfully!\n";
                return;
            }
        }

        cout << "Student Not Found" << endl;
    }
    void updateCGPA(Student s[], int n)
    {
        cout << "Enter roll No: " << endl;
        cin >> roll_no;
        for (int i = 0; i < n; i++)
        {
            if (s[i].roll_no == roll_no)
            {
                cout << "Enter CGPA: " << endl;
                cin >> s[i].cgpa;
                cout << "CGPA Updated Successfully!\n";
                return;
            }
        }
        cout << "Student Not Found" << endl;
    }
    void updateHostel(Student s[],int n)
    {
        cout << "Enter roll No: " << endl;
        cin >> roll_no;
        for (int i = 0; i < n; i++)
        {
            if (s[i].roll_no == roll_no)
            {
                cout << "Enter Hostel" << endl;
                cin >> s[i].hostel;
                cout << "Hostel Updated Successfully!\n";
                return;
            }
        }
        cout << "Student Not Found" << endl;
    }
    void displaydetails(Student s[], int n)
    {
        for (int i = 0; i < n; i++)
        {

            cout << "Student details are:-" << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Roll No: " << s[i].roll_no << endl;
            cout << "Degree: " << s[i].degree << endl;
            cout << "CGPA: " << s[i].cgpa << endl;
            cout << " Hostel: " << s[i].hostel << endl;
        }
    }
};
int main()
{
      int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    s[0].addDetails(s, n);

    s[0].displaydetails(s, n);

    s[0].updateCGPA(s, n);

    s[0].updateHostel(s, n);

    s[0].updateDetails(s, n);

    s[0].displaydetails(s, n);

    return 0;
}