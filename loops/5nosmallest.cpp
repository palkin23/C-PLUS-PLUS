#include<bits\stdc++.h>
using namespace std;
int main(){
    int num;
    int smallest=INT_MAX;
    for(int i=1;i<=5;i++){
        cout<<"Enter number "<<i<<" :";
        cin>>num;
        if(smallest>num){
            smallest=num;
        }
    }
cout<<"Smallest no is : "<<smallest<<endl;
}