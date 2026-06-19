#include<iostream>
using namespace std;
// 1 to n
void inc(int n){
    if(n==0){
        return;
    }else{
        inc(n-1);
        cout<<n<<" ";
    }
}
//n to 1
void dec(int n){
    if (n==0){
        return ;
    }else{
        cout<<n<<" ";
        dec(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"Numbers are from n to 1 : "<<endl;
    inc(n);
    cout<<endl;
    cout<<"Numbers are from n to 1 : "<<endl;
    dec(n);
    return 0;
}
 

