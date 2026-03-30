#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,7,2,2,7,3,4};
    int ans=0;
    for(int i=0 ; i<7 ; i++){
        ans=ans^arr[i];
    }
cout<<"The unique element in the array is: "<<ans<<endl;
    return 0;
}