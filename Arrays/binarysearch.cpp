#include<iostream>
using namespace std;
int  binarysearch(int arr[],int size , int key){
    int start=0;
    int end= size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1; // moving to the right side
        }
        else{
            end=mid-1: // moving to the left side
        }
        mid=start+(end-start)/2;

        }
        return -1; // element is not found in the array
    }
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key;
    int found=binarysearch(arr,10,key);
    if(found!=-1){
        cout<<"Element is found at index: "<<found<<endl;
    }
    else{
        cout<<"Element is not found in array"<<endl;
    }
   
}
