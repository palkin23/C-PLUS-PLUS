#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int counteven=0;
   int countodd=0;
   for(int i=0;i<5;i++){
     if(arr[i]%2==0){
        counteven++;
     }
   }
   cout<<"Count of even digits in array is : "<<counteven<<endl;
   for(int i=0;i<5;i++){
     if(arr[i]%2!=0){
        countodd++;
     }
   }
   cout<<"Count of odd digits in array is : "<<countodd<<endl;
 return 0;
}