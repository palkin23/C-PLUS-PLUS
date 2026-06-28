#include<iostream>
using namespace std;
int main(){
    int largest=-1;
    int num;
    for(int i=1;i<=5;i++){
        cout<<"Enter number"<<i<<":";
        cin>>num;
        if(largest<num){
            largest=num;
        }
      }
      cout<<"Largest number is : "<<largest;
    
}