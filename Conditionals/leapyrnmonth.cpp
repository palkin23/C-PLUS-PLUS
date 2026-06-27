#include<iostream>
using namespace std;
int main(){
    int month,year;
   cout<< "Enter month number: "<<endl;
    cin>>month;
    if(month==1|| month==3 ||month==5 || month==7 || month==8 || month==10 ||  month==12){
        cout<<"31 days are there"<<endl;
    }
   else if(month==4|| month==6 ||month==9 || month==11){
        cout<<"30 days are there"<<endl;
    } 
    else if(month==2){
        cout<<" Enter year"<<endl;
        cin>>year;
        if(year%4==0){
            cout<<"29 days in February"<<endl;
        }else{
            cout<<"28 days in February"<<endl;
        }
    }
   return 0; 
}