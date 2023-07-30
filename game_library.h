#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void clear()
{
    system( "clear" );
}

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

int sort_number(int max, int low)
{
    srand(time(NULL) * getpid());

    int sorted = (rand() % (max - low + 1)) + low;



    return sorted;
}

int guess(int guess_number, int the_number)
{
    /*
    Receive a number to verify whether it's 
    equal or not to sorted number
    */
    if (guess_number > the_number)
    {
        printf("Your guess is higher than the secret number...\n\n\n");
        return 2;
    }
    else if (guess_number < the_number)
    {
        printf("Your guess is lesser than the secret number...\n\n\n");
        return 1;
    }
    
    return 0; /*Guessed the number*/
    
}

void wait()
{
    system("sleep 30s");
}

void play_game()
{

    clear();
    int sorted = sort_number(10, 0);
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
        }
        clear();
    }while(luck != 0);
    
    wait();
}