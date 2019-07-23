/*Author: Md Shoaib
  Purpose: Print no using loop , input from user
  Date: 03/07/2019 */
#include <stdio.h>

int main()
{
  //variable declaration
  int num, index = 0;
  //input from user
  printf("Please input a number to print 0 to your number: ");
  scanf("%d", &num);
  //loop
  while (index <= num)
  {
    printf("your no is: %d\n", index);
    index = index + 1;
  }

  return 0;
}
