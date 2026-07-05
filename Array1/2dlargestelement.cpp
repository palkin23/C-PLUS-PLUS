
#include<bits/stdc++.h>
using namespace std;
int main(){
    int largest_element=INT_MIN;
    int arr[3][3]={{1,2,12},{3,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]>largest_element){
                largest_element=arr[i][j];
            }
        }
    }
    cout<<"To print the array: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<" "<< arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Largest Element Is: "<<largest_element<<endl;
    return 0;
}