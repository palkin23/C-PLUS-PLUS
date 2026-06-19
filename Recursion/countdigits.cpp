#include<iostream>
using namespace std;
int cod(int n){
    if(n>=1 && n<10){
        return 1;
    }else{
        return 1+cod(n/10);
    }
}
int main(){
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    cout<<"Number of digits are "<<cod(n);
       }