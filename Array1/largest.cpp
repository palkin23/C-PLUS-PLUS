#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[5]={9,1,10,3,5};
    int largest=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest elemts of array is : "<<largest<<endl;
    return 0;
}