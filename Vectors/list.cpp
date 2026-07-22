#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> cars = {"Mercedes", "BMW", "Ford"};
    cout << cars.front();
    cout << endl;
    cout << cars.back();
    cout << endl;
    cars.push_front("abc");
    cars.push_back("z");
    for (string v : cars)
    {
        cout << v << " ";
    }
    cout << endl;
    cars.pop_front();
    cars.pop_back();
    for (string v : cars)
    {
        cout << v << " ";
    }
    cout << endl;
}