#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4}; // declaration of a vector
    for (int value : vec)           // To Print the vector
    {
        cout << value << " ";
    }
    cout << endl;
    vec.erase(vec.begin());
    vec.erase(vec.end()-1);
     for (int value : vec)           // To Print the vector
    {
        cout << value << " ";
    }
    cout << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}