#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void title_bar(void)
{
    int i = 0;
    while (i < 32)
    {
        printf("*");
        i += 1;
    }
    printf("\n");
}

void title(void)
{
    printf("\n\nDANCE OF NUMBERS\n\n");
}

int sort_number(int max_number)
{

    int r;
    srand(time(NULL));
    r = (rand() % max_number) + 1;

    return r;
}

int guess(int guess_number, int sorted_number)
{
    /*
    Receive a number to verify whether it's 
    higher or lower than the sorted number
    */
    if (guess_number > sorted_number)
    {
        printf("Your guess is higher than the secret number...\n\n\n");
        return 2;
    }
    else if (guess_number < sorted_number)
    {
        printf("Your guess is lesser than the secret number...\n\n\n");
        return 1;
    }
    
    return 0; /*If 0 then guessed*/
    
}

int define_limit()
{
    int number_limit;
    printf("What is the range of number?(Starting from 0)\n\n");
    printf("=======>");
    scanf("%d", &number_limit);
    return number_limit;
}

void wait()
{
    system("clear");
    printf("It was a nice game...\n\n\n\n");
    
    int option;
    printf("0 - Exit;\n");
    printf("1 - Go back to menu;\n");
    printf("\n\n=======>");
    scanf("%d", &option);
    switch (option)
    {
    case 0:
        system("exit");
    case 1:
        break; 
    default:
        option = 1;
    }
}

void play_game()
{
    system("clear");
    int limit = define_limit();
    int sorted = sort_number(limit);
    int number;
    int luck;

    do
    {
        printf("Type a number: ");
        scanf("%d", &number);
        luck = guess(number, sorted);
        if (luck = 0)
        {
            printf("You won!!!\n\n");
            break;
        }
        
    }while(luck != 0);
    
    sleep(10);
    wait();
}