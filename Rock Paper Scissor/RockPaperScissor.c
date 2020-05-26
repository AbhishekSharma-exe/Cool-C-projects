#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
void main()
{
    int playerChoice, compChoice, playerScore = 0, compScore = 0;
    char name[64];
    printf("\t\t\t\t\t\t\t  Howdy,Mate!\n\t\t\t\t\t\t------------------------------\n");
    printf("\t\t\t\t\t\tWELCOME TO ROCK PAPER SCISSORS\n\n ");
    printf("Enter Your name:");
    gets(name);
    printf(" Okay %s,Let's play!", name);
    printf(" Choose 1 for Rock,2 for Paper and 3 for Scissors:\n Go ahead,make a choice\n ");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your choice:");
        scanf("%d", &playerChoice);
        compChoice = generateRandomNumber(3) + 1;
        printf(" Computer chose %d and you chose %d\n ", compChoice, playerChoice);
        if (playerChoice == 1)
        {
            if (compChoice == 1)
            {
                printf(" It's a draw!\n\n");
            }
             if (compChoice == 2)
            {
                printf(" Computer wins!\n\n ");
                compScore++;
            }
             if (compChoice == 3)
            {
                printf(" %s wins \n\n ",name);
                playerScore++;
            }
        }
        else if (playerChoice == 2)
        {
            if (compChoice == 1)
            {
                printf(" You won a point %s \n\n ", name);
                playerScore++;
            }
             if (compChoice == 2)
            {
                printf(" It's a draw!\n\n ");
            }
             if (compChoice == 3)
            {
                printf(" Oh no! Computer won this time :(\n\n ");
                compScore++;
            }
        }
        else if (playerChoice == 3)
        {
            if (compChoice == 1)
            {
                printf(" Computer wins a point \n\n ");
                compScore++;
            }
             if (compChoice == 2)
            {
                printf(" %s got a point!\n\n ", name);
                playerScore++;
            }
             if (compChoice == 3)
            {
                printf(" It's a draw!\n\n ");
            }
        }
        else
        {
            printf(" Better to stick with 1,2 and 3 only\n ");
        }
    }

    if (playerScore > compScore)
    {
        printf("Congrats! %s wins the game by %d-%d to computer\n ",name,playerScore, compScore);
    }
     if (playerScore < compScore)
    {
        printf("Computer won by %d-%d ! Better luck next time\n ", compScore, playerScore);
    }
     if (playerScore == compScore)
    {
        printf("What are the odds! It's a draw\n ");
    }
    getch();
}
