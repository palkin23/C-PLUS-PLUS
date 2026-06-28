#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    cout<<"Number is : "<<num<<endl;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
  }
  cout<<endl;
  if(sum==num){
    cout<<"Perfect number"<<endl;
  }else{
    cout<<"Not a Perfect Number"<<endl;
  }
  return 0;
}