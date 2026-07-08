/*. Create an array of structures for 10 students and find:
● average marks
● highest marks
● lowest marks */
#include <bits\stdc++.h>
using namespace std;
struct Students
{
    double marks;
};
int main()
{
    struct Students arr[10];
    cout << "Enter Marks of 10 students:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i].marks;
    }
    double sum = 0;
    double highest_marks = INT_MIN;
    double lowest_marks = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i].marks;
        if (highest_marks < arr[i].marks)
        {
            highest_marks = arr[i].marks;
        }
        if (lowest_marks > arr[i].marks)
        {
            lowest_marks = arr[i].marks;
        }
    }
    cout << "Average Marks of Students are: " << sum / 10 << endl;
    cout << "Highest Marks of Students are: " << highest_marks << endl;
    cout << "Lowest Marks of Students are : " << lowest_marks << endl;
    return 0;
}