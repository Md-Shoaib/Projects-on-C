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
//Program created by Harry2(using for loop)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variable declaration
    int userDigit;
    //Inpput from user
    printf("Enter the number you want multiplication table of:");
    scanf("%d", &userDigit);

    printf("Multiplication table of %d is as follows:\n", userDigit);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", userDigit, i, userDigit * i);
    }

    return 0;
}
