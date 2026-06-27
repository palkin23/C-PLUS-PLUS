#include<iostream>
using namespace std;
int main(){
double income ;
cout<<"Enter income"<<endl;
cin>>income;
double tax=0;
if(income<=250000){
    cout<<"No Tax"<<endl;
}
if(income<=500000){
    tax=(income-250000)*0.05;
    }
if(income<=1000000){
    tax=12500+(income-500000)*0.2;
}
else{
    tax= 112500+(income-1000000)*0.3;
 }
cout<<"Tax is : "<<tax<<endl;
return 0;
}