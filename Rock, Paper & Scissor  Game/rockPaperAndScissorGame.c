/*Author:Md Shoaib
  Purpose:Rock, Paper & Scissor Game
  Date:15/07/2019 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//generate random number function
int genRandNum(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    //variable declaration
    int game, comp;
    int playerScore = 0, compScore = 0;
    char name[20];
    //Welcome message
    printf("\n**********************************************************\n");
    printf("\tWELCOME TO Rock, Paper & Scissor GAME\n");
    printf("**********************************************************\n\n");
    //Input name from user
    printf("Please enter your name:\n");
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
    {
        //Input choice for game, from user
        printf("Enter your choice %s \n_______________________________\nChoose 0 for ROCK\nChoose 1 for PAPER\nChoose 2 for SCISSOR\n_______________________________\n", name);
        scanf("%d", &game);

        printf("You choose --> %d\n", game);
        //Computer's turn(Message to user) using functions and logic
        printf("\n###Computer's Turn###\n");
        comp = genRandNum(2);
        printf("\nPlayer2(Computer) Choose --> %d\n", comp);
        //logic

        //draw logic
        if ((game == 0 && comp == 0) || (game == 1 && comp == 1) || (game == 2 && comp == 2))
        {
            printf("It's a Draw!!!\n");
        }

        //comp score
        else if ((game == 0 && comp == 1) || (game == 1 && comp == 2) || (game == 2 && comp == 0))
        {
            compScore++;
        }

        //user score
        else if ((game == 0 && comp == 2) || (game == 1 && comp == 0) || (game == 2 && comp == 1))
        {
            playerScore++;
        }
        printf("\n");
        printf("*******************\n");
        printf("%s's Score is:%d\n", name, playerScore);
        printf("Computer's Score is:%d\n", compScore);
        printf("*******************\n");
    }

    //compare the scores
    if (compScore == playerScore)
    {
        printf("The Match is Draw!!!\n");
    }
    else if (compScore > playerScore)
    {
        printf("Computer won this match!!!\n");
    }
    else
    {
        printf("%s won this match!!!\n", name);
    }

    return 0;
}