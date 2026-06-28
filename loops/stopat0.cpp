#include<iostream>
using namespace std;
int main(){
    int num,n;
    cin>>n;
    for(int i=0;i<n;i++){
   cout<<"Enter number "<<i<<" :";
   cin>>num;
   if(num==0){
    cout<<"sorry you entered a 0"<<endl;
    break;
   }
    }
}