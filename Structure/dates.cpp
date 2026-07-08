/* Create a structure Date (day, month, year). Compare two
dates and find which one is earlier.*/
#include <iostream>
using namespace std;
struct Date
{
    int date;
    int month;
    int year;
};
int main()
{
    struct Date d1 = {23, 06, 2007};
    struct Date d2 = {8, 05, 2015};
    Date earlier;
    if (d1.year > d2.year ||
        (d1.year == d2.year && d1.month > d2.month) ||
        (d1.month == d2.month && d1.date > d2.date))
    {
        earlier = d2;
    }
    else
    {
        earlier = d1;
    }

    cout << earlier.date << "/" << earlier.month << "/" << earlier.year << endl;
}
