#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The sum of numbers from 1 to n is :"<<sum<<endl;

    }
