#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[5]={9,1,10,3,5};
    int smallest=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Smallest elemts of array is : "<<smallest<<endl;
    return 0;
}