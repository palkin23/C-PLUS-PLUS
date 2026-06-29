#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,7,9,122};
    bool isascending=true;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
           isascending=false;
           break;
        }
     }
    if(isascending==true){
        cout<<"Ascending order"<<endl;
    }else{
        cout<<"Not in Ascending order"<<endl;
    }
 
}