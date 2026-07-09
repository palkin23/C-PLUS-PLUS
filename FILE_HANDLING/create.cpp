/*Write a program to create a file named student.txt
and store your name, roll number, and course in it.*/
#include <iostream>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w"); // create a file

    fprintf(fptr, "Palkin Gupta\n");
    fprintf(fptr, "1025030500\n");
    fprintf(fptr, "COE");
    fclose(fptr);
    cout<<"Data Stored Successfully"<<endl;
    return 0;
}