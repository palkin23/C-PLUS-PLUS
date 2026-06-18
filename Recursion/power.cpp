#include <iostream>
using namespace std;

int power(int base, int pow) {
    if (pow == 0) {
        return 1;
    }
    return base * power(base, pow - 1);
}

int main() {
    int base, pow;

    cout << "Enter base" << endl;
    cin >> base;

    cout << "Enter power" << endl;
    cin >> pow;

    cout << "Output is " << power(base, pow) << endl;

    return 0;
}
