/*19. Implement a mini database using structures:
● add record
● delete record
● update record
● search record*/
#include <iostream>
using namespace std;
struct Database
{
    string name;
    int id;
    double marks;
};
int main()
{
    int size = 4;
    Database data[] = {{"Preeti", 1, 100}, {"Simran", 2, 99}, {"Reet", 3, 99.5}, {"Geet", 4, 89.5}};
    // To print the original array
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << data[i].name << "\t";
        cout << "Id: " << data[i].id << "\t";
        cout << "Marks: " << data[i].marks << endl;
    }
    // Add Record
    Database data2[size + 1];
    int index;
    cout << "Enter index" << endl;
    cin >> index;
    cout << "Enter name:" << endl;
    cin >> data2[index].name;
    cout << "Enter id:" << endl;
    cin >> data2[index].id;
    cout << "Enter marks:" << endl;
    cin >> data2[index].marks;
    for (int i = 0; i < size + 1; i++)
    {
        if (i < index)
        {
            data2[i] = data[i];
        }
        else if (i == index)
        {
            continue;
        }
        else
        {
            data2[i] = data[i - 1];
        }
    }
    cout << "New array with added elements is : " << endl;
    // To print the array with added element
    for (int i = 0; i < size + 1; i++)
    {
        cout << "Name: " << data2[i].name << "\t";
        cout << "Id: " << data2[i].id << "\t";
        cout << "Marks: " << data2[i].marks << endl;
    }
    // delete record
    Database data3[size - 1];
    int index_delete;
    cout << "Enter index to be deleted" << endl;
    cin >> index_delete;
    for (int i = 0; i < size - 1; i++)
    {
        if (i < index_delete)
        {
            data3[i] = data[i];
        }
        else
        {
            data3[i] = data[i + 1];
        }
    }
    cout << "New array with deleted elements is : " << endl;
    // To print the array with deleted element
    for (int i = 0; i < size - 1; i++)
    {
        cout << "Name: " << data3[i].name << "\t";
        cout << "Id: " << data3[i].id << "\t";
        cout << "Marks: " << data3[i].marks << endl;
    }
    // search element;
    string name;
    cout << "Enter name you want to search: ";
    cin >> name;
    bool a = false;
    for (int i = 0; i < size; i++)
    {
        if (name == data[i].name)
        {
            a = true;
            cout << "Sr. No: " << i+1 << "\t";
            cout << "Name: " << data[i].name << "\t";
            cout << "Id: " << data[i].id << "\t";
            cout << "Marks: " << data[i].marks << endl;
        }
    }
    if (!a)
    {
        cout << "Not found" << endl;
    }
    // Update recoord
    int id;
    cout << "Enter id you want to update:" << endl;
    cin >> id;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (id == data[i].id)
        {
            found = true;
            cout << "Enter name: " << endl;
            cin >> data[i].name;
            cout << "Enter id: " << endl;
            cin >> data[i].id;
            cout << "Enter marks: " << endl;
            cin >> data[i].marks;
        }
    }
    if (!found)
    {
        cout << "No such data exists" << endl;
    }
    // To print the array with Updated element
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << data[i].name << "\t";
        cout << "Id: " << data[i].id << "\t";
        cout << "Marks: " << data[i].marks << endl;
    }

    return 0;
}