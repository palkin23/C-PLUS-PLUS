#include<iostream>
using namespace std;
int main(){
    //upper half
    for(int i=1;i<=5;i++){
        //starting space
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        //first star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}