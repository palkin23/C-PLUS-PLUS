#include<iostream>
using namespace std;
bool check(int n){
    if(n==0){
      return true;
    }else if (n==1){
        return false;}
        check(n-2);
    }
       int main(){
    int n;
    cin>>n;
    if(check(n)){
        cout<<"even";
    }else{
        cout<<"odd";
    }

}