/*Write a program to count the number of characters,
 words, and lines present in a text file.*/
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    fclose(fptr);
    char read[100];
    fptr = fopen("file.txt", "a");
    fprintf(fptr, "Hi\nI am Palkin\n123");
    fclose(fptr);
    fptr = fopen("file.txt", "r");
     //TO COUNT NO OF LINES
    int count=0; 
    //TO COUNT NO OF CHARACTERS
    int characters=0;
    int space =0;
    if (fptr != NULL)
    {
        while (fgets(read, 100, fptr))
        {
           printf("%s" , read);
           //lines count
            count ++;
            //characters count
           for(int i=0;read[i]!='\0';i++){
            characters++;
           }
        }
        printf("\n");
    }else
    {
      printf("  DOESN'T EXIST");
    }
  printf("No of lines:%d\n",count);
   printf("No of Characters:%d\n",characters);
   fclose(fptr);
   return 0;
}