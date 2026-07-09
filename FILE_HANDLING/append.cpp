/*Write a program to append today's date to an
existing log.txt file without deleting its previous contents.*/
#include <iostream>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("log.txt", "w");
    fprintf(fptr, "This is a file");
    fclose(fptr);
    fptr = fopen("log.txt", "a");
    fprintf(fptr, "\n 9 JUly 2026");
    cout<<"File appended successfully"<<endl;
    fclose(fptr);
}