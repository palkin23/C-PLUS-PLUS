#include<iostream>
using namespace std;
int power(int arr[], int size){
    for (int i=0;i<size;i++){
        if(arr[i]/2==0){
            cout<<"element is power of 2"<<endl;
        }
        else{
            cout<<"element is not power of 2"<<endl;

        }
    }
}
int main(){
    int arr[3]={1,2,3};
  int ans=  power(arr,3);
    cout<<"Powers of 2 in array are "<<ans<<endl;
    return 0;

}