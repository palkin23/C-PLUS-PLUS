#include <iostream>
using namespace std;
int main()
{
    int arr1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int arr2[2][2] = {{1, 2}, {1, 1}};
    int arr3[3][2];
    for(int q=0;q<3;q++)
{
  for(int t=0;t<2;t++){
    arr3[q][t]=arr1[q][t]*arr2[t][t];
  }
}    


   //to print the resultant matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<" "<<arr3[i][j];
        }
        cout<<endl;
    }
}