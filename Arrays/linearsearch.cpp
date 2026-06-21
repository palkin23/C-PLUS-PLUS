#include<iostream>
using namespace std;
bool search(int arr[] , int size , int key){
    for (int i=0; i<size ; i++){
        if(arr[i]==key){
            return true;
        }
    }
        
            return false;
        
        }

    

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"Element is found in array"<<endl;
    }
    else{
        cout<<"Element is not found in array"<<endl;
    }
   
}
/*
#include <stdio.h>

int main() {
  int arr[5]={1,4,5,4,7};
  int n=4;
  for(int i=0;i<5;i++){
      if(arr[i]==n){
          printf("%d is found at %d position\n",n,i+1);
       //break;
      }
  }

    return 0;
}
*/