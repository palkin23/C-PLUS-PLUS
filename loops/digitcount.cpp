#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    cout<<"Number is : "<<num<<endl;
    int count=0;
    while(num>0){
        num=num/10;
        count=count+1;
    }
cout<<"Count is : "<<count<<endl;
}