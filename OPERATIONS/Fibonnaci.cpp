#include<iostream>
using namespace std;
int main(){
int a=0;
int b=1;
int n;
cout<<"Enter n :"<<endl;
cin>>n;
cout<<a<<" "<<b<<" ";
for (int i=1; i<=n;i++){
    int nextno=a+b;
    cout<<nextno<<" ";
    a=b;
    b=nextno;

}
}