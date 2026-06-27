#include<iostream>
using namespace std;
int main(){
float bs , gs, HRA , DA;
cout<<"Enter basic salary: "<<endl;
cin >>bs;
if(bs<=10000){
    HRA=(20/100.0)*bs;
    DA=(80/100.0)*bs;
}
else if(bs<=20000){
    HRA=(25/100.0)*bs;
    DA=(90/100.0)*bs;
}
else if(bs>20000){
    HRA=(30/100.0)*bs;
    DA=(95/100.0)*bs;
}
gs=bs+HRA+DA;
cout<<"Gross Salary is : "<<gs<<endl;
return 0;
}