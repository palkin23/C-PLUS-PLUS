#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter operator"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"Sum is : "<<a+b<<endl;
        break;
        case '-':
        cout<<"Difference is : "<<a-b<<endl;
        break;
        case '*':
        cout<<"Product is : "<<a*b<<endl;
        break;
        case'/':
        cout<<"Quotient is : "<<a/b<<endl;
        break;
        case'%':
        cout<<"Remainder is : "<<a%b<<endl;
        break;
        default:
        cout<<"Invalid operator"<<endl;
    }
}