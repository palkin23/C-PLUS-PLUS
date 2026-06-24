#include<iostream>
using namespace std;
int main(){
    //top
for(int i=5;i>=1;i--){
    //space
    for(int j=1;j<=5-i;j++){
        cout<<" ";
    }
    //star
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
//bottom
for(int i=1;i<=4;i++){
    //space
    for(int j=1;j<=4-i;j++){
        cout<<" ";
    }
    //star
    for(int j=1;j<=2*i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    
}
}