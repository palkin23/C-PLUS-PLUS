#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<3;i++){
        for (int j = 0; j<8;j++)
        {
            if (i == j || (i + j) % 2 == 0)
            {
                cout << "*";
            }
            cout<<endl;
        }
        
    }
        return 0;
}