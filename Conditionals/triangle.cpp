#include<iostream>
using namespace std;
 int main(){
    int s1,s2,s3;
    cout<<"Enter the 3 angles of triangle: "<<endl;
    cin>>s1>>s2>>s3;
    if(s1+s2+s3==180 && s1>0 && s2>0 && s3>0){
        cout<<"Valid Triangle"<<endl;
        if (s1<90 && s2<90 && s3<90){
            cout<<"Acute Triangle"<<endl;
        }
        else if (s1==90 || s2==90 || s3==90){
            cout<<"Right Angled Triangle"<<endl;
          }
        else if(s1>90 || s2>90 || s3>90){
            cout<<"Obtuse Triangle"<<endl;
        }
    }
    else{
        cout<<"Invalid Triangle"<<endl;
    }
    return 0;
 }