#include<iostream>
using namespace std;
void otn(int s,int e){
    if(s==e){
        cout<<s ;
    }else{
        cout<<s <<endl;;
        otn(s+1,e);
    }
}
void nto(int s , int e){
    if(e==1){
        cout<<"1";
    }else{
        cout<<e<<endl;
        nto(s,e-1);
    }

}
int main(){
    int s,e;
    cin>>s>>e;
    cout<<"Numbers from 1 to n"<<endl;
    otn(s,e);
     cout<<"Numbers from n to 1"<<endl;
    nto(s,e);
}