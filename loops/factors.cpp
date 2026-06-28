#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    cout<<"Number is : "<<num<<endl;
    cout<<"Factors are:- "<<endl;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<" "<<i;
        }
    }
    cout<<endl;
}