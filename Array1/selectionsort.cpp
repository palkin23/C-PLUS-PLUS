#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 2, 8, 1, 5};
    int smallest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (smallest > arr[i+1])
        {
            smallest = arr[i+1];
            int j=0;
            smallest=arr[j];
            j++;

    }
}
    cout << " " << smallest;
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}