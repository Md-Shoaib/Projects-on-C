/*Author: Md Shoaib
  Purpose: Making a multiplication program using function
  Date: /07/2019 */
#include <stdio.h>
//function
void multable(void)
{
    int usernum, limit;
    printf("Enter the number you want multiplication table of:");
    scanf("%d", &usernum);
    printf("Table of %d is:-\n", usernum);
    for (limit = 1; limit <= 10; limit++)
    {
        printf("%d x %d = %d\n", usernum, limit, usernum * limit);
    }
}

int main()
{
    //function call
    multable();

    return 0;
}
