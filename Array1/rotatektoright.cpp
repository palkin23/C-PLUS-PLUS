#include <Iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int k;
    cout << "Enter k: " << endl;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        if (i < k)
        {
            arr2[i] = arr[5 - k + i];
        }
        int j = 0;
        for (int i = k; i < 5; i++)
        {
            arr2[i] = arr[j];
            j++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr2[i];
    }
    return 0;
}