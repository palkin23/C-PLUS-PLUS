#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,3,2,7,11,8};
    cout<<"Original array is "<<endl;
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<5;i++){
        swap(arr[i],arr[i+1]);

    }
    cout<<"Swapped array is "<<endl;
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;

}