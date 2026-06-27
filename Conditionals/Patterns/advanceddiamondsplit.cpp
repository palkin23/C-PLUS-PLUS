#include<iostream>
using namespace std;
int main(){
    //top
    for(int i=1;i<=3;i++){
        //space
        for(int j=1;j<3-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(int i=1;i<=2;i++){
        //space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=7-2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}