/*Write a program to search for a given word in a
text file and display the number of times it appears.*/
#include <iostream>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("display.txt", "w");
    fprintf(fptr, "I am Palkin\nPalkin is in TIET\nPalkin likes to code");
    fclose(fptr);
    char read[100];
    char word[20];
    int count = 0;
    cout << "Enter the word you want to search" << endl;
    cin.getline(word, 20);
    cin.ignore();
    fptr = fopen("display.txt", "r");
    if (fptr != NULL)
    {
        while (fgets(read, 100, fptr))
        {
            cout << read;
            for (int i = 0; read[i] != '\0'; i++)
            {
                if (word[i] == read[i])
                {
                    count++;
                }
            }
        }
        cout << "\n";
    }
    cout << endl;
    cout << "Count of the word is: " << count;
    return 0;
}