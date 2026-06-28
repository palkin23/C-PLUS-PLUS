#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     cout<<"sum of no's from 1 to n"<<endl;
     int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
   cout<<"Sum  is : "<<sum<<endl;
   //new
            cout<<"Product of no's from 1 to n"<<endl;
            int product=1;
            for(int i=1;i<=n;i++){
            product=product*i;
                               }
             cout<<"Product is : "<<product<<endl;
return 0;
}