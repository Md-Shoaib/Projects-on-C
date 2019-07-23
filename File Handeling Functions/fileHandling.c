/*Author:Md Shoaib
  Purpose:Example functions for File I/O
  Date:19/07/2019 */
#include <stdio.h>

int main()
{
  //*****Reading a file******
  /* 
    //Declaration of file handling
    FILE *ptr = NULL;
    char string[50];
    //Reading a file
    ptr = fopen("myFile.txt","r");
    fscanf(ptr, "%s", string);
    //Printing
    printf("The content of this file has %s\n", string);
    */

  //******Writing a file******
  //variable declaration
  FILE *ptr = NULL;
  char string[40] = "This content was produced by Md Shoaib";
  //Writing a file
  ptr = fopen("myfile.txt", "a");
  //Printing using function
  fprintf(ptr, "%s", string);

  return 0;
}
