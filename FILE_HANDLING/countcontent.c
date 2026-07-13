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
    // TO COUNT NO OF LINES
    int count = 0;
    // TO COUNT NO OF CHARACTERS
    int characters = 0;
    // TO COUNT NO OF WORDS
    int words = 0;
    if (fptr != NULL)
    {
        while (fgets(read, 100, fptr))
        {
            printf("%s", read);
            // lines count
            count++;
            // characters count
            for (int i = 0; read[i] != '\0'; i++)
            {
                characters++;
                if (read[i] == ' ' || read[i] == '\n' || read[i] == '\t')
                {
                    words++;
                }
            }
            // words count
        }
        printf("\n");
    }
    // if the file contains at least one character, then
    // add one for the final word.
    if (characters > 0)
    {
        words++;
    }
    else
    {
        printf("  DOESN'T EXIST");
    }
    printf("No of lines:%d\n", count);
    printf("No of Characters:%d\n", characters);
    printf("No of Words:%d\n", words);
    fclose(fptr);
    return 0;
}