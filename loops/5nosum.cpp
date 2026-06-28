#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    for(int i=1;i<=5;i++){
        cout<<"Enter number"<<i<<":";
        cin>>num;
        sum=sum+num;
    }
    cout<<"Summ of 5 no's is : "<<sum<<endl;
}