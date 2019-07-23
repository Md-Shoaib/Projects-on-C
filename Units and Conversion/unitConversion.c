/*Author: Md Shoaib
  Purpose: Units and conversion
           kms to miles
  Date: 06/07/2019 */
#include <stdio.h>
//function
int kmstomil(int num)
{
  int result;
  result = num / 1.609;
  printf("%d kms converts to miles, your result is:%d", num, result);
  return num;
}

int main()
{
  int user;
  printf("Please enter your length to convert kms to miles:");
  scanf("%d", &user);
  printf("Your length is:");
  kmstomil(user);

  return 0;
}
