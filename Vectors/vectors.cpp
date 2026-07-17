#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec; // declaration of a vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.pop_back();     //deletes last element
    vec.push_back(2);
    vec.push_back(2);
    vec.pop_back(); 
    cout<<vec[0]<<endl;
    cout<<vec.at(0)<<endl;  //other way to get output
      for (int val : vec) // for each loop
    {
        cout << val << " ";
    }
    cout << endl;
    cout << vec.size() << endl;
    cout << vec.capacity();
    return 0;
}