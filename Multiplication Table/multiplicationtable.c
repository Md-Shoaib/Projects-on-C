/*Author: Md Shoaib
  Purpose: 
  Date: 05/07/2019 
Print multiplication table of a number entered by the user in pretty form

Example:
Input:
Enter the number you want multiplication table of:
6
Output:
Table of 6 is:-
6 x 1 = 6
.
.
.
6 x 10 = 60
*/
#include <stdio.h>

int main()
{
  //variable declaration
  int num, limit;
  printf("Enter the number you want multiplication table off:");
  scanf("%d", &num);
  printf("Table of %d is:-\n", num);
  //for loop
  for (limit = 1; limit <= 10; limit++)
  {
    printf("%d x %d = %d\n", num, limit, num * limit);
  }

  return 0;
}
