#include<iostream>
using namespace std;
int *rev(int arr[],int arr2[],int n,int i){
    if(n==0){
        return arr2;
    }else{
        arr2[i]=arr[n-1];}
       return  rev(arr,arr2,n-1,i+1);
    }
    int main(){
        int arr[]={1,2,3,4};
        int arr2[4];
        int n=4;
        rev(arr, arr2, n, 0);
        for(int i=0;i<n;i++){
            cout<<arr2[i]<<" ";
        }
        return 0;
    }
        