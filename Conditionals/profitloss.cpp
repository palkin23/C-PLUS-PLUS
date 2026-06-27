#include<iostream>
using namespace std;
int main(){
int cp,sp;
cout<<"enter cp and sp"<<endl;
cin>>cp>>sp;
if (sp>cp){
    int profit;
    profit=sp-cp;
cout<<"Profit is "<<profit<<endl;
}
else if(sp<cp){
    int loss;
    loss=cp-sp;
    cout<<"Loss is "<<loss<<endl;
}
else{
    cout<<"No profit and No loss"<<endl;
}
return 0;
}