/*Author:Md Shoaib
  Purpose:Matrix multiplication 2x2
  Date:19/07/2019 */
#include <stdio.h>

int main()
{
  //variable declaration
  int a[2][2], b[2][2], c[2][2], i, j;
  //message to user
  printf("***************************************\n");
  printf("\tMATRIX MULTIPLICATION 2x2\n");
  printf("***************************************\n\n");

  printf("#####ENTER VALUES#####\n\n");
  //input from user
  printf("Please enter values for a[rows][columns] matrix\n");
  //entering values of a[][]
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Enter value for A[%d][%d]:", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\n#####Your a matrix is#####\n\n");

  //printing values of a[][]
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  //input from user
  printf("\nPlease enter values for b[rows][cloumns] matrix\n");
  //entering values of b[][]
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Enter value for b[%d][%d]:", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  printf("\n#####Your b matrix is#####\n\n");

  //printing values of b[][]
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }

  printf("\n#####Your answer is#####\n\n");

  //Printing values in a hard way
  printf("%d ", c[0][0] = (a[0][0] * b[0][0]) + (a[0][1] * b[1][0]));
  printf("%d\n", c[0][1] = (a[0][0] * b[0][1]) + (a[0][1] * b[1][1]));

  printf("%d ", c[1][0] = (a[1][0] * b[0][0]) + (a[1][1] * b[1][0]));
  printf("%d\n", c[1][1] = (a[1][0] * b[0][1]) + (a[1][1] * b[1][1]));
  return 0;
}
