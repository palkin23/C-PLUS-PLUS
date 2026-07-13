/*Write a program to accept five lines of text from the user,
store them using fputs(), and display them using fgets().*/
#include <bits\stdc++.h>
using namespace std;
int main()
{
  FILE *fptr;
  char line[100];
  fptr = fopen("file1.cpp", "w");
  cout << "give input"<<endl;

  for (int i = 0; i < 5; i++)
  {
    cin.getline(line, 100);
    fputs(line, fptr);
    fputc('\n', fptr); // to move to new line
  }

  fclose(fptr);
  cout << "contents of file" << endl;
  fptr = fopen("file1.cpp", "r");
  while (fgets(line, 100, fptr))
  {
    cout << line;
  }

  cout << endl;
  fclose(fptr);
  return 0;
}
