#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    vec.insert(vec.begin()+3,99);
    for(int v:vec){
        cout<<v<<" ";
    }
return 0;

}