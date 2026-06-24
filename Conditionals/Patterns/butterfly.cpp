#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        //Left side top
        for(int j=1;j<=i;j++){
            cout<<"*";
            }
            //starting mid spaces
            for(int j=1;j<=10-2*i;j++){
                cout<<" ";
            }
            //Right side top
         for(int j=1;j<=i;j++){
            cout<<"*";
           }
           cout<<endl;
        }
    //middle stars
    for(int i=1;i<=2;i++){
        for(int j=1;j<=10;j++){
            cout<<"*";
              }
    cout<<endl;
}
for(int i=4;i>=1;i--){
    //Left side Bottom
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //mid spaces
    for(int j=1;j<=10-2*i;j++){
        cout<<" ";
    }
//Right side bottom
for(int j=1;j<=i;j++){
    cout<<"*";
}
    cout<<endl;
}



}