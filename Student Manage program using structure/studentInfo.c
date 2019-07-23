/*Author: Md Shoaib
  Purpose:(Structure)Write a program to input RollNo, Name, Marks from the user of 5 students and  display on the screen? 
  Date: 12/07/2019 */
#include <stdio.h>
#include <string.h>
//Structure
struct studentInfo
{
  char name[20];
  int rollNo;
  int marks;
};
//Main program
int main()
{
  //Structure variable declaration
  struct studentInfo stu[5];
  //message for user
  printf("\nThis program for input 5 students details and print them, So please input details of students.\n");

  //input from user (studentdetails)
  for (int i = 0; i <= 4; i++)
  {
    printf("\nEnter Student%d Name:\n", i);
    fflush(stdin);
    gets(stu[i].name);

    printf("Enter Studnet%d Roll no:\n", i);
    scanf("%d", &stu[i].rollNo);

    printf("Enter Studnet%d marks:\n", i);
    scanf("%d", &stu[i].marks);
  }

  //Before print message to user
  printf("\n\n*****Printing your details*****\n");

  //Print details to user
  for (int i = 0; i <= 4; i++)
  {
    printf("\nStudent%d Name: %s\n", i, stu[i].name);

    printf("Studnet%d Roll no: %d\n", i, stu[i].rollNo);

    printf("Studnet%d marks: %d\n", i, stu[i].marks);
  }

  //good bye message to user
  printf("\n\n<<<Thank you sir>>>");

  return 0;
}
