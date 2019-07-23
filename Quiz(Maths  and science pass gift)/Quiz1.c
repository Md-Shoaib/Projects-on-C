/*Author = Md Shoaib
  Purpose = Quiz
  Date = 02/07/2019*/
#include <stdio.h>

int main()
{
    int exam;

    printf("Which exams you had passed? Type 1 for Maths type 2 for Science if both then type3:");
    scanf("%d", &exam);

    printf("\nYou entered %d\n\n", exam);

    if (exam == 1)
    {
        printf("Well done you passed Maths you will get a prize worth rs 15.\n");
    }
    else if (exam == 2)
    {
        printf("Well done you passed Science you will get a prize worth rs 15.");
    }
    else if (exam == 3)
    {
        printf("Well done you passed both subjects you will get a prize worth rs 45.");
    }

    return 0;
}
