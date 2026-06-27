#include<iostream>
using namespace std;
int main(){
    int pin;
    double amount;
    double balance=8000000;
    cout<<"Enter pin: "<<endl;
    cin>>pin;
    if (pin==1234){
        cout<<"correct pin"<<endl;
        cout<<"Enter amount to withdraw: "<<endl;
        cin>>amount;
        if(amount<=balance){
            cout<<"Withdrawl Successful"<<endl;
        }else{
            cout<<"Insufficient Balance"<<endl;
        }

    }
    else{
        cout<<"Incorrect pin"<<endl;
    }
    return 0;
}