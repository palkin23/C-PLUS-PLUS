/*. Create a structure Product with id, name, price, quantity. Create
 a billing system to calculate total cost. */
#include <iostream>
using namespace std;
struct Product
{
    string name;
    int id;
    int quantity;
    double price;
};
int main()
{
    int sum = 0;
    struct Product p[5] = {
        {"Laptop", 101, 10, 55000.00},
        {"Smartphone", 102, 25, 30000.00},
        {"Headphones", 103, 50, 2000.00},
        {"Keyboard", 104, 30, 1500.00},
        {"Mouse", 105, 40, 800.00}};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + p[i].price;
    }
    cout << "Total bill is INR: " << sum << endl;
    return 0;
}
