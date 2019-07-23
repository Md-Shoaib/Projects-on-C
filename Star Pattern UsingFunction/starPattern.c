/*Author: Md Shoaib
  Purpose: Tale input from the user and ask user to choose 0 for trinangular star pattern and 1 for reversed
  triangular star pattern.
  ............................
  Patterns.
  *
  **
  ***
  **** -> Triangualr star pattern
  
  ****
  ***
  **
  * -> Revers Triangular star pattern
  Date: 09/07/2019 */
#include <stdio.h>
//function for triangular star pattern
void triangularStar(pattern)
{
    //loop for print first rows
    for (int i = 1; i <= pattern; i++)
    {
        //second loop for print star using first loop
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
//function for triangular star pattern
void reverseTriangularStar(pattern)
{
    //loop for print first rows
    for (int i = 0; i <= pattern; i++)
    {
        //second loop for print star using first loop
        for (int j = 0; j <= pattern - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    //variable declaration
    int user, star;
    //print for user
    printf("Please enter 0 for Triangular star pattern.\nPlease enter 1 for reversed Triangular star pattern\n");
    scanf("%d", &user);
    //switch condition for star or revStar
    switch (user)
    {
    case 0:
        //message for how many rows want to print our user
        printf("Please enter a number for how many rows you want to print:");
        scanf("%d", &star);
        triangularStar(star);
        break;

    case 1:
        //message for how many rows want to print our user
        printf("Please enter a number for how many rows you want to print:");
        scanf("%d", &star);
        reverseTriangularStar(star);
        break;

    default:
        //message for how many rows want to print our user
        printf("You entered an invalid input");
        break;
    }

    return 0;
}
