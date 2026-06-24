#include<iostream>
using namespace std;
int main(){
    //Upper Half
    for(int i=1;i<=5;i++){
        
      //spaces
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){

            cout<<"*";
        }
            cout<<endl;
        }
        //lower Half
        for(int i=4;i>=1;i--){
            //spaces
            for(int j=1;j<=5-i;j++){
                cout<<" ";
            }
            //stars
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
               cout<<endl;
               }
                      }