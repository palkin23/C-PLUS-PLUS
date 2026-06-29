#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,4,2};
    int key;
    cout<<"Enter the element you want to find"<<endl;
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element is found at index : "<<i+1<<endl;
           // break;
        }
    }
    //else
            cout<<"Not found!"<<endl;

}