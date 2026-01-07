#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter ch:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<" ch is lowercase letter"<<endl;
    
    }
    else if (ch>='A' && ch<='Z'){
        cout<<"ch is upper case letter"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"ch is a digit"<<endl;
    }
    else{
        cout<<"ch is a special character or either invalid input by the user"<<endl;
    }
}