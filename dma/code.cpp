#include<iostream>
using namespace std;
int main(){
int *ptr;
ptr = (int*)malloc(sizeof(*ptr)); 
// If memory cannot be allocated, print a message and end the main() function
if (ptr == NULL) {
  printf("Unable to allocate memory");
  return 1;  // Exit the program with an error code
}

// Set the value of the integer
*ptr = 20;

// Print the integer value
printf("Integer value: %d\n",*ptr);

// Free allocated memory
free(ptr);

// Set the pointer to NULL to prevent it from being accidentally used
ptr=NULL;
return 0;
}