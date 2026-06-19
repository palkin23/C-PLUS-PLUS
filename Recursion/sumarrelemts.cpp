#include<iostream>
using namespace std;
int sumarray(int arr[],int n){
if(n==0){
    return 0;
}else{
    return arr[n-1]+sumarray(arr,n-1);
}
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    cout<<sumarray(arr,n)<<" ";
}