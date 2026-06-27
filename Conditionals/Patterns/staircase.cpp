#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        //SPACE
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        //STARS
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
return 0;
}