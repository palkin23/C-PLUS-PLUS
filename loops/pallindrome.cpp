#include<iostream>
using namespace std;
int main(){
     int num,digit,num2=0;
     cin>>num;
    cout<<"Number is : "<<num<<endl;
    int num1=num;
   while(num>0){
       digit=num%10;
       num2=(num2*10)+digit;
        num=num/10;
       
    }
    //num=num2 will check 0 equal to num2 beacuse of the while loop
   if(num1==num2){
    cout<<"Pallindrome Number"<<endl;
    }else{
        cout<<"Not a pallindrome number"<<endl;
    }
    return 0;
}