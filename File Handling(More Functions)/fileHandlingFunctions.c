/*Author:Md Shoaib
  Purpose:More file handling functions (Uncomment as your needs)
  Date:20/07/2019 */
#include <stdio.h>

int main()
{
  //declaration of File Handling
  FILE *ptr = NULL;

  //opening a file
  ptr = fopen("myFile.txt", "w"); // <- r to w for insert any character.
  /* 
    //fgetc function
    char c = fgetc(ptr);
    //print
    printf("The character I read was %c\n", c);
    */

  /* 
    //fgets function
    char str[30];
    fgets(str, 5, ptr); //4 character +1 \0 null character = 5
    printf("The string is %s\n", str);
    */

  /* 
    //fputc function
    fputc('O', ptr);
    */

  /* 
   //fputs function
   fputs("This is Md Shoaib", ptr);
   */

  //closing the file
  fclose(ptr);
  return 0;
}
