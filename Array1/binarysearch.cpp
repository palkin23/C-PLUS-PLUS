#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[m] == key)
        {
           return m;
        }
        else if (key > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return -1; // if not found
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout << "Enter element: " << endl;
    cin >> key;
    int found = binarysearch(arr, 10, key);
    if (found != -1)
    {
        cout << "Element found at index: " << found<<endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}