//Sum of all even numbers using while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
            i++; // if we write i++ inside if block it will not increment once i is odd after that

        }
        cout<<"sum of all even numbers till "<<n<<" is "<<sum<<endl;
    
}