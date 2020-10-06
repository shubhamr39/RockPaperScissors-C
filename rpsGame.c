#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* It's a Rock Paper Scissors Game made using C language */

int computerTurn(int number)
{
    srand(time(NULL));
    return rand() % number;
}

int result(char YourChoice, char ComputerChoice)
{
    if (YourChoice == ComputerChoice)
    {
        return 0;
    }
    else if (YourChoice == 'r' && ComputerChoice == 'p')
    {
        return -1;
    }
    else if (YourChoice == 'r' && ComputerChoice == 's')
    {
        return 1;
    }
    else if (YourChoice == 'p' && ComputerChoice == 'r')
    {
        return 1;
    }
    else if (YourChoice == 'p' && ComputerChoice == 's')
    {
        return -1;
    }
    else if (YourChoice == 's' && ComputerChoice == 'r')
    {
        return -1;
    }
    else if (YourChoice == 's' && ComputerChoice == 'p')
    {
        return 1;
    }
}

int main()
{
    printf("Let's play Rock Paper Scissor\n");
    int YourScore = 0, ComputerScore = 0;
    char YourChoice, ComputerChoice;
    char array[] = {'r', 'p', 's'};
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter, 1 for Rock, 2 for Paper, 3 for Scissors\n");
        printf("Your Turn\nEnter a number from 1 to 3\n");
        int num;
        scanf("%d", &num);
        YourChoice = array[num - 1];
        printf("Your Choise is %c \n", YourChoice);
        num = computerTurn(3) + 1;
        ComputerChoice = array[num - 1];
        printf("Computer Choise is %c \n\n", ComputerChoice);
        if (result(YourChoice, ComputerChoice) == 1)
        {
            YourScore++;
            printf("Youre Score: %d \n Computer Score: %d \n\n", YourScore, ComputerScore);
        }
        else if (result(YourChoice, ComputerChoice) == -1)
        {
            ComputerScore++;
            printf("Youre Score: %d \n Computer Score: %d \n\n", YourScore, ComputerScore);
        }
        else
        {
            YourScore++;
            ComputerScore++;
            printf("Youre Score: %d \n Computer Score: %d \n\n", YourScore, ComputerScore);
        }
    }
    if (YourScore == ComputerScore)
    {
        printf("The game is tied..!!! \n Let's play another game.");
    }
    else if (YourScore > ComputerScore)
    {
        printf("Congratulations..!!! YOU WON THE GAME.");
    }
    else
    {
        printf("Hahaha..!!! Computer won this GAME.");
    }
    return 0;
}
