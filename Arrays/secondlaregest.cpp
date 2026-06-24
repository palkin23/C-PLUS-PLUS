#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {3, 2, 4, 1};
    int max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (max < arr[i + 1])
        {
            max = arr[i + 1];
        }
    }
    cout << "largest : " << max << endl;
}
