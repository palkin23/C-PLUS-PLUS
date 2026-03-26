#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
    int one[5]={0};
    int n;
    n=6;
    printarr(one,6);
    //to print size of the array
    int size=sizeof(one)/sizeof(int) ;
    cout<<"Size of array is "<<size<<endl;

    return 0;
}