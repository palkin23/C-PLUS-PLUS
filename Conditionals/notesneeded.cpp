#include<iostream>
using namespace std;
int main(){
    int amount=1330;
    int notes=0;
    cout<<"Total Amount is : "<<amount<<endl;
    switch(1){
        case 1:
        notes=amount/100;
        amount=amount%100;
        cout<<"Number of 100 notes : "<<notes<<endl;
        case 2:
        notes=amount/50;
        amount=amount%50;
        cout<<"Number of 50 notes : "<<notes<<endl;
        case 3:
        notes=amount/20;
        amount=amount%20;
        cout<<"Number of 20 notes : "<<notes<<endl;
        case 4:
        notes=amount/10;
        amount=amount/10;
        cout<<"Number of 10 notes : "<<notes<<endl;
    }
    
        
    
}