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
//Program created by Harry1

#include <stdio.h>

int main()
{
    //variable declaration
    int userDigit;
    //Input from user
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &userDigit);
    //Output
    printf("Table of %d is:-\n", userDigit);

    printf("%d x 1 = %d\n", userDigit, userDigit * 1);
    printf("%d x 2 = %d\n", userDigit, userDigit * 2);
    printf("%d x 3 = %d\n", userDigit, userDigit * 3);
    printf("%d x 4 = %d\n", userDigit, userDigit * 4);
    printf("%d x 5 = %d\n", userDigit, userDigit * 5);
    printf("%d x 6 = %d\n", userDigit, userDigit * 6);
    printf("%d x 7 = %d\n", userDigit, userDigit * 7);
    printf("%d x 8 = %d\n", userDigit, userDigit * 8);
    printf("%d x 9 = %d\n", userDigit, userDigit * 9);
    printf("%d x 10 = %d\n", userDigit, userDigit * 10);

    return 0;
}
