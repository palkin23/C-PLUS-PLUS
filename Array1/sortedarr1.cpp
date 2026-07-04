#include<iostream>
using namespace std;
int main(){
    int size1=3;
    int size2=3;
    int n=size1+size2;
    int arr1[]={1,3,5};
    int arr2[]={2,4,6};
    int arr3[n];
   for(int k=0;k<n;k++){
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            while(arr1[i]<arr2[j]){
              arr3[k]=arr1[i];
            }
      }
   }
}
for(int i=0;i<n;i++){
    cout<<" "<<arr3[i];
}
}