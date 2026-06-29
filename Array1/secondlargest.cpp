#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,10,12,3,5};
    int largest=INT_MIN;
    int secondlargest;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
           secondlargest=largest;
            largest=arr[i];
            
            }

    } 
    cout<<"Second Largest elemts of array is : "<<secondlargest<<endl;
    return 0;
}