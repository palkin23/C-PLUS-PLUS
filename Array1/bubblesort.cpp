#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 2, 8, 1, 5};
    for (int i = 0; i < 5; i++)
    { for(int k=0;k<5;k++){
        int j = i + 1;
        if (arr[i] > arr[j])
        {
            arr[i] = arr[j];
            j++;
        }
    }
}

    // to print the array
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }
}