#include<iostream>
using namespace std;
int main(){
     int num,digit,num2=0;
    cin>>num;
    cout<<"Number is : "<<num<<endl;
   while(num>0){
       digit=num%10;
       num2=(num2*10)+digit;
        num=num/10;
       
    }
    cout<<"Reversed Number is : "<<num2<<endl;
return 0;
}