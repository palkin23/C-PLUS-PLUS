#include<iostream>
using namespace std;
int main(){
    int num1=0;
    int num2=1;
    int num3=num1+num2;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=num1;i<n;i++){
        cout<<num1<<endl;
        num1=num2;
        num2=num3;
        num3=num1+num2;
    }
return 0;
}