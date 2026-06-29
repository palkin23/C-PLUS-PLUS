#include<iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};    //declaration of an array
    for(int i=4;i>=0;i--){
        cout<<" "<<array[i];
    }
    cout<<endl;
    return 0;
}