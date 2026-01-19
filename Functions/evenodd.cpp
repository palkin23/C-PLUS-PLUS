#include <iostream>
using namespace std;
bool iseven(int a){
    if( a&1){
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int a;
    cin>>a;
    int even=iseven(a);
    if(even){
    cout<<a<<" is even"<<endl;
    }
    else{
        cout<<a<<" is odd"<<endl;
    }
}