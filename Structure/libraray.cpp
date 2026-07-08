/* Create a structure Library and store multiple books.
Implement search by book name.*/
#include <iostream>
using namespace std;
struct Library
{
    string name;
    int book_id;
};
int main()
{

    struct Library arr[5] = {{"Harry Potter", 123}, {"Germino Stilton", 124}, {"How I met your mother", 125}, {"Girl meets the world", 126}, {"Full House", 127}};
    string name;
    cout << "Enter the book you want to find:" << endl;
    getline(cin, name);
    Library found;
    for (int i = 0; i < 5; i++)
    {
        if (name == arr[i].name)
        {
            found = arr[i];
            cout << "Book Name: " << found.name << endl;
            cout << "Book Id  : " << found.book_id << endl;
            break;
        }
        }

    return 0;
}