#include<iostream>
using namespace std;
int sumarray(int arr[],int n){
for(int i=0;i<n;i++){
    if(i==n-1){
        return arr[i];
    }
    else{
        return arr[i]+sumarray(arr,n-1);
    }
}
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    cout<<sumarray(arr,n)<<" ";
}