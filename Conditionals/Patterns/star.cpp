#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
    
        }
        cout<<endl; //if we use endl in inner while loop each star comes in a new line 
        i=i+1;
    }
}