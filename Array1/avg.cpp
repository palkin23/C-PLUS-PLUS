#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,1,4,3,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"Average of elemts of array is : "<<sum/5<<endl;
    return 0;
}