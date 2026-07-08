/*Create a structure Complex to store complex numbers. Add two
 complex numbers using a function.*/
#include <iostream>
using namespace std;
struct Complex
{
    int a;
    int b;
};
int sum(Complex c1, Complex c2)
{
    int real_sum = c1.a + c2.a;
    int complex_sum = c1.b + c2.b;
    cout << "Sum of two complex No's is :" << real_sum << " +"
         << complex_sum << "i" << endl;
}
int main()
{
    struct Complex c1, c2;
    c1.a = 2;
    c1.b = 5;
    c2.a = 9;
    c2.b = 5;
    cout << "FIrst No.: " << c1.a << "+" << c1.b << "i" << endl;
    cout << "SEcond No.: " << c2.a << "+" << c2.b << "i" << endl;
    sum(c1, c2);
    return 0;
}
