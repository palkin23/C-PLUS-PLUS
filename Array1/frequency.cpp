#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,3,5,3};
    int frequency=0;
    int key;
    cout<<"Enter key: "<<endl;
    cin>>key;
    for(int i=0;i<7;i++){
        if(key==arr[i]){
             frequency++;
        }  
      }
    cout<<"Frequency of element "<<key<<"in the array is: "<<frequency<<endl;
}