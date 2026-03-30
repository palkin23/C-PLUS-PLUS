#include<iostream>
using namespace std;
void printarr(int arr[], int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//We are swapping alternate elements of the array
void swap(int arr[] , int size){
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {1,2,3,4,5};
    cout<<"Before swapping alternate elements of the array: "<<endl;
    printarr(even,8);
    cout<<"After swapping alternate elements of the array: "<<endl;
    swap(even,8);
    printarr(even,8);
    cout<<"Before swapping alternate elements of the array: "<<endl;
    printarr(odd,5);
    cout<<"After swapping alternate elements of the array: "<<endl;
    swap(odd,5);
    printarr(odd,5);
    return 0;
}