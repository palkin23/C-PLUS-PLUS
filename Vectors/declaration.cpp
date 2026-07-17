#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4};   // declaration of a vector
     for (int value : vec)           //To Print the vector
    {
        cout << value << " ";
    }
    cout << endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
   vector<int>v(3,10);
    for (int v : v)           //To Print the vector
    {
        cout << v << " ";
    }cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    vector<int>v2(vec);  //to copy the vector vec into v2
     for (int x : v2)           //To Print the vector
    {
        cout << x<< " ";
    }cout<<endl;
}