/*. Create a structure Matrix and perform
matrix addition using structures. */
#include <iostream>
using namespace std;
struct Matrix
{
    int row;
    int columns;
    int arr[10][10];
};
int main()
{
    struct Matrix m1, m2, m3;
    cout << "Enter rows:" << endl;
    cin >> m1.row;
    cout << "Enter columns: " << endl;
    cin >> m1.columns;
    cout << "Enter the elements of matrix 1" << endl;
    for (int i = 0; i < m1.row; i++)
    {
        for (int j = 0; j < m1.columns; j++)
        {
            cin >> m1.arr[i][j];
        }
    }
    cout << "Matrix 1 is:" << endl;
    for (int i = 0; i < m1.row; i++)
    {
        for (int j = 0; j < m1.columns; j++)
        {
            cout << m1.arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter rows:" << endl;
    cin >> m2.row;
    cout << "Enter columns: " << endl;
    cin >> m2.columns;
    cout << "Enter the elements of matrix 2" << endl;
    for (int i = 0; i < m2.row; i++)
    {
        for (int j = 0; j < m2.columns; j++)
        {
            cin >> m2.arr[i][j];
        }
    }
    cout << "Matrix 2 is:" << endl;
    for (int i = 0; i < m2.row; i++)
    {
        for (int j = 0; j < m2.columns; j++)
        {
            cout << m2.arr[i][j] << " ";
        }
        cout << endl;
    }
    if (m1.row != m2.row || m1.columns != m2.columns)
    {
        cout << "Matrix addition not possible.";
        return 0;
    }
    else
    {
        for (int i = 0; i < m1.row; i++)
        {
            for (int j = 0; j < m1.columns; j++)
            {
                m3.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            }
        }
        cout << "Matrix 3: " << endl;
        for (int i = 0; i < m1.row; i++)
        {
            for (int j = 0; j < m1.columns; j++)
            {
                cout << m3.arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
