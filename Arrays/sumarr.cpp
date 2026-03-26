#include<iostream>
using namespace std;
int sum(int arr[], int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[3]={1,2,3};
  int ans=  sum(arr,3);
    cout<<"Sum of array is "<<ans<<endl;
    return 0;

}