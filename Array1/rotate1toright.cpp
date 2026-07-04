#include<Iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++){
        arr2[0]=arr[4];
        arr[i]=arr2[i+1];
    }
     for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }
}