#include<iostream>
using namespace std;
void array1(int arr[] , int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[] , int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end-- ;
    }
}
void printarr2(int arr[] , int n) {
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Original array is "<<endl;
    array1(arr,5);
    reverse(arr,5);
    cout<<"Reversed array is "<<endl;
    printarr2(arr,5);
}
return 0;
}