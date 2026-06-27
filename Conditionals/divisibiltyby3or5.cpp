#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"Divisible by both 3 and 5"<<endl;
    }
    else if(num%3==0 && num%5!=0){
        cout<<"Divisible by only 3"<<endl;
  }
  else if(num%5==0 && num%3!=0){
        cout<<"Divisible by only 5"<<endl;
  }
  else{
    cout<<"Divisible by none"<<endl;
  }
  return 0;
}