#include<iostream>
using namespace std;
int main(){
    cout<<"even no's from 1 to 50"<<endl;
    for(int i=1;i<=50;i++){
        if(i%2==0){
            cout<<" "<<i;
        }
    }
    cout<<endl;
     cout<<"odd no's from 1 to 50"<<endl;
    for(int i=1;i<=50;i++){
        if(i%2!=0){
            cout<<" "<<i;
        }
    }
    cout<<endl;
}