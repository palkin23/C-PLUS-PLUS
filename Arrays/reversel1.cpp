#include<iostream>
using namespace std;
void reverse(int arr[],int arr2[],int n){
    for(int i=0;i<n;i++){
      arr2[i]=arr[n-1-i];
     }
            }
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int arr2[4];
    reverse(arr,arr2,n);
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
     }
           }