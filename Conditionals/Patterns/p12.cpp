#include<iostream>
using namespace std;
//Inverted Pyramid
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for (int j=0;j<9-2*i ;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}