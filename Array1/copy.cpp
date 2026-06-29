#include<iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};    
    int arr2[5];
    for(int i=0;i<5;i++){
       arr2[i]=array[i];
    }
    cout<<"Array 2's elements are: "<<endl;
    for(int i=0;i<5;i++){
       cout<<" "<<arr2[i];
    }

    cout<<endl;
    return 0;
}