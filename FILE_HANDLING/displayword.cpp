/*Write a program to search for a given word in a
text file and display the number of times it appears.*/
#include <bits\stdc++.h>
#include<string>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("display.txt", "w");
    fprintf(fptr, "I am Palkin\nPalkin is in TIET\nPalkin likes to code");
    fclose(fptr);
    char read[100];
    char word[20]="Palkin";
    int count = 0;
   
    fptr = fopen("display.txt", "r");
    if (fptr != NULL)
    {
        while (fgets(read, 100, fptr))
        {
            cout << read;
            char *ptr;
               while ((ptr = strstr(ptr, word)) != NULL)
{
    count++;
    ptr += strlen(word);
}
            
        }
        cout << "\n";
    }
    cout << endl;
    cout << "Count of the word is: " << count;
    return 0;
}