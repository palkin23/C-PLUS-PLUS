#include<iostream>
using namespace std;
int main(){
    int m1=50;
    int m2=59;
    int m3=80;
    int m4=90;
    int m5=98;
    int sum=m1+m2+m3+m4+m5;
    float percentage=(sum/500.0)*100;
    if(percentage>=75){
        cout<<"Distinction"<<endl;
    }
    else if(percentage>=60){
        cout<<"First Division"<<endl;
    }
    else if(percentage>=45){
        cout<<"Second Division"<<endl;
    }
    else if (percentage>=33){
        cout<<"Third Division"<<endl;
    }
}