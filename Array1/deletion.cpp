#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,2,8,4,3,6};
    int arr2[n-1];
    int index,element;
    cout<<"Enter index asnd element"<<endl;
    cin>>index>>element;
    for(int i=0;i<n+1;i++){
         if(i<index){
            arr2[i]=arr[i];
           
         }else{
          arr2[i]=arr[i+1];
         }
    

    }
    cout<<"New Array with a deleted element is:"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr2[i]<<endl;
    }
}