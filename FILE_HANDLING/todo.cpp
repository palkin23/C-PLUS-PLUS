/*TO-DO LIST
1. Add Task
2. View Tasks
3. Delete Task
4.Edit list
5. Exit*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("todo.txt", "w");
    fprintf(fptr,
            "Complete C++ assignment\n"
            "Practice DSA\n"
            "Go to gym\n"
            "Buy groceries\n");
    fclose(fptr);
    int choice;
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Edit List\n";
    cout << "5. Exit\n";
    cout << "Enter choice" << endl;
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
    case 1:
        // ADD A TASK
        fptr = fopen("todo.txt", "a");
        char add[100];
        cout << "Enter Task: " << endl;
        cin.getline(add, 100);
        cin.ignore();
        fprintf(fptr, add);
        fclose(fptr);
          fptr = fopen("todo.txt", "r");
       
        cout << "To do List is: " << endl;
        if (fptr != NULL)
        {
            while (fgets(add, 100, fptr))
            {
                printf("%s", add);
            }
        }
        cout << endl;
        break;
    case 2:
        // VIEW TASKS:
        fptr = fopen("todo.txt", "r");
        char myread[100];
        cout << "To do List is: " << endl;
        if (fptr != NULL)
        {
            while (fgets(myread, 100, fptr))
            {
                printf("%s", myread);
            }
        }
        cout << endl;
        fclose(fptr);
        break;
  /* case 3:
        // Delete a task
        fptr = fopen("todo.txt", "r");
        char del[100];
        cout << "Enter Task to be deleted: " << endl;
        cin.getline(del, 100);
        while (fgets(myread, 100, fptr))
        {
            for (int i = 0; i < 100; i++)
            {
                if (myread[i] != del[i])
                {
                    printf("%s", myread);
                }
            }
        }
        break;
        */

    case 5:
        // EXIT
        cout << "Exited Successfully" << endl;
        break;
    default:
        cout << "No such choice/option exists" << endl;
    }
}
