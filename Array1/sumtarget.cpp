#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target_sum;
    cout << "Enter the sum" << endl;
    cin >> target_sum;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i] + arr[j] == target_sum)
            {
                cout << " " << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}