#include<iostream>
using namespace std;
int countPowersOfTwo(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int n = arr[i];
        // Bitwise check: a power of 2 has only one bit set
        if (n > 0 && (n & (n - 1)) == 0) {
            cout << n << " is power of 2" << endl;
            count++;
        } else {
            cout << n << " is not power of 2" << endl;
        }
    }
    return count; // Now it returns the actual count
}

int main(){
    int arr[3]={1,2,3};
  int ans=  power(arr,3);
    cout<<"Powers of 2 in array are "<<ans<<endl;
    return 0;

}