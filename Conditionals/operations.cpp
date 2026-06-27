#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;
    if(op=='+'){
        cout<<"Sum is : "<<n1+n2<<endl;
    }
    else if(op=='-'){
        cout<<"Difference is : "<<n1-n2<<endl;
    }
    else if(op=='*'){
        cout<<"Product is : "<<n1*n2<<endl;
    }
    else if(op == '/'){
        if(n2 == 0){
            cout << "Error: Division by zero is not allowed" << endl;
        } else {
            cout << "Division is: " << (float)n1 / n2 << endl;
        }
    }
    else{
        cout << "Invalid operator" << endl;
    }

    return 0;
}