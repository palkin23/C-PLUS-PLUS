#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the elemts of array"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];     //to take input
    }
    cout<<endl;
    cout<<"Array is: "<<endl;
    for(int i=0;i<10;i++){
        cout<<" "<<arr[i];     //to print array in the same order as input
    }
    return 0;
}