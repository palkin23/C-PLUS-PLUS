/*Write a program to replace every occurrence 
of the word "C" with "C Programming" in a text file.*/
#include<iostream>
using namespace std;
int main(){
    FILE *fptr;
    fptr=fopen("replace.txt","w");
    fprintf(fptr,"This is C language\nC is case-sensitive");
    fclose(fptr);
    fptr=fopen("replace.txt","a");
    char

}