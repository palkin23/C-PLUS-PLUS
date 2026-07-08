/*13. Create a structure for a bank account: account_no ,name,
balance &Implement:
● deposit
● withdraw
● check balance*/
#include <iostream>
using namespace std;
struct Bank
{
    string name;
    int account_no;
    double balance;
};
void display(Bank b)
{
    cout << "Account Holder's Name: " << b.name << endl;
    cout << "Account No.: " << b.account_no << endl;
    cout << "Balance: " << b.balance << endl;
}
int deposit(Bank &b)
{
    double money;
    cout << "Enter money you want to deposit" << endl;
    cin >> money;
    b.balance += money;
    cout << "Money Successfully Deposited & Balance is: " << b.balance << endl;
}
int withdraw(Bank &b)
{
    double withdraw_amount;
    cout << "Enter money you want to withdraw" << endl;
    cin >> withdraw_amount;
    b.balance -= withdraw_amount;
    cout << "Money Successfully withdrawn  & Balance is: " << b.balance << endl;
}

int main()
{
    Bank b1 = {"Sharang", 1234, 8000};
    display(b1);
    deposit(b1);
    withdraw(b1);
    cout << "Balance is : " << b1.balance << endl;
    return 0;
}