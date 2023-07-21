#include <stdio.h>
#include <conio.h>
int main()
{
    char ans, trya, name[20];
    printf("\n\n Press enter to start \n");
    getch();
    printf(" Enter your name: ");
    gets(name);
    printf("\n\nWelcome Mr/Mrs: %s", name);
    printf("\n I hope you enjoy this game \n    Best of luck\n");
    do
    {
        int score = 0;
        printf("\n\n       * * * Spelling Quiz  * * *\n");
        printf("**********************************************\n");
        printf("press enter to see Instructions");
        getch();
        printf("\n       Instructions\n");
        printf("\nEach word has 4 options: a, b, c, or d \nChoose the correct option from them\n\npress enter to play");
        getch();
        // Question 1
        printf("\nQuestion 1: Which is the correct spelling?\n");
        printf("a. Compliment\nb. Complement\nc. Complament\nd. Complamint\n");
        printf("Enter your answer: ");
        scanf(" %c", &ans);
        if (ans == 'a' || ans == 'A')
        {
            score++;
        }
        // Question 2
        printf("\nQuestion 2: Which is the correct spelling?\n");
        printf("a. Parfect\nb. Perfect\nc. Perfact\nd. Parfect\n");
        printf("Enter your answer: ");
        scanf(" %c", &ans);
        if (ans == 'b' || ans == 'B')
        {
            score++;
        }
        //Question 3
        printf("\nQuestion 3: Which is the correct spelling?\n");
        printf("a. Acomodate\nb. Acommodate\nc. Accommodate\nd. Accomodate\n");
        printf("Enter your answer: ");
        scanf(" %c", &ans);
        if (ans == 'c' || ans == 'C')
        {
            score++;
        }
        //Question 4
        printf("\nQuestion 4: Which is the correct spelling?\n");
        printf("a. Cemetary\nb. Cemetery\nc. Sematary\nd. Cematary\n");
        printf("Enter your answer: ");
        scanf(" %c", &ans);
        if (ans == 'b' || ans == 'B')
        {
            score++;
        }
        //Question 5
        printf("\nQuestion 5: Which is the correct spelling?\n");
        printf("a. Onomatopoeia\nb. Onametopoia\nc. Onamatophia\nd. Onametophia\n");
        printf("Enter your answer: ");
        scanf(" %c", &ans);
        if (ans == 'a' || ans == 'A')
        {
            score++;
        }
        printf("\nYour Score is: %d/5", score);
        printf("\n\nDo you want to try again? Press 'y' or 'n' then enter: ");
        scanf(" %c", &trya);
    } while (trya == 'y' || trya == 'Y');

    return 0;
}

