/*Author:Md Shoaib
  Purpose:
  Date:05/07/2019 */
/* Print multiplication table of a number entered by the user in pretty form

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
//Program created by Md Shoaib(01/07/2019)

#include <stdio.h>

int main()
{
  //variable declaration
  int userDigit, calculation1, calculation2, calculation3, calculation4, calculation5, calculation6, calculation7, calculation8, calculation9, calculation10;

  //Input from user
  printf("Enter the number you want multiplication table of:");
  scanf("%d", &userDigit);
  //Logic
  calculation1 = userDigit * 1;
  calculation2 = userDigit * 2;
  calculation3 = userDigit * 3;
  calculation4 = userDigit * 4;
  calculation5 = userDigit * 5;
  calculation6 = userDigit * 6;
  calculation7 = userDigit * 7;
  calculation8 = userDigit * 8;
  calculation9 = userDigit * 9;
  calculation10 = userDigit * 10;

  //Result for our user
  printf("Table of %d is:-\n", userDigit);

  printf("%d X 1 = %d\n", userDigit, calculation1);
  printf("%d X 2 = %d\n", userDigit, calculation2);
  printf("%d X 3 = %d\n", userDigit, calculation3);
  printf("%d X 4 = %d\n", userDigit, calculation4);
  printf("%d X 5 = %d\n", userDigit, calculation5);
  printf("%d X 6 = %d\n", userDigit, calculation6);
  printf("%d X 7 = %d\n", userDigit, calculation7);
  printf("%d X 8 = %d\n", userDigit, calculation8);
  printf("%d X 9 = %d\n", userDigit, calculation9);
  printf("%d X 10 = %d\n", userDigit, calculation10);

  return 0;
}
