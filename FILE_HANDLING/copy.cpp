/*Write a program
to copy the contents of source.txt into destination.txt.*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("source.txt", "w");
    fprintf(fptr, "Hello\n Hi\n How are you?\n I am Good and Fine\n");
    fclose(fptr);
    fptr = fopen("source.txt", "r");
    char mysource[100];
    FILE *fpt;
    fpt = fopen("destinantion.txt", "w");
    char mydest[100];
    if (fptr != NULL && fpt != NULL)
    {
        while (fgets(mysource, 100, fptr))
        {

            strcpy(mydest, mysource);
            fprintf(fpt, mydest);
        }
    }
    if (fpt != NULL)
    {
        cout << "Copied Successfully" << endl;
    }
}
