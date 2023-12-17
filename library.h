/*
    Game Library
*/

int difficulty = 0; //Difficulty global variable

void titleBar(void)
{
    int i;
    for(i = 0;i < 42; i++)
    {
        printf("*");
    }
}

void title(void)
{
    system("clear");
    titleBar();
    printf("\n\n            Dance of Numbers\n\n");
    titleBar();
    printf("\n");
    system("sleep 5s");
}

int defineSettings(void)
{
    
    system("clear");
    printf("Which difficulty do you wanna play?\n\n");
    printf("    0 - Easy\n");
    printf("    1 - Medium\n");
    printf("    2 - Hard\n");
    printf("\n\n    ::");
    scanf("%d", &difficulty);
    fflush(stdin);

    return difficulty;
}

void play(void)
{
    // Part of this code is based on the link: 
    //https://www.geeksforgeeks.org/number-guessing-game-in-c/

    system("clear");

    int find, guess, num_guesses = 0;

    //Seed random number generator
    srand(time(NULL));

    if (difficulty == 0)
    {
        find = rand() % 34;
        
            do {
                system("clear");
                printf("Guess a number between 0 and 33\n");

                if (num_guesses > 9) {
                    printf("\nYou Loose!\n");
                    system("sleep 5s");
                    break;
                }
        
                // Input by user
                scanf("%d", &guess);
        
                // When user guesses lower
                // than actual number
                if (guess > find)
                {
                    printf("Lower number please!\n");
                    system("sleep 5s");
                    num_guesses++;
                }
 
                // When user guesses higher
                // than actual number
                else if (find > guess)
        
                {
                    printf("Higher number please!\n");
                    system("sleep 5s");
                    num_guesses++;
                }
        
                // Printing number of times
                // user has taken to guess
                // the number
                else{
                    printf("You guessed the number in %d attempts!\n", num_guesses);
                }
                    
 
            } while (guess != find);
    }
    else if(difficulty == 1)
    {
        find = rand() % 67;
            do {
                system("clear");
                printf("Guess a number between 0 and 66\n");

                if (num_guesses > 9) {
                    printf("\nYou Loose!\n");
                    system("sleep 5s");
                    break;
                }
        
                // Input by user
                scanf("%d", &guess);
        
                // When user guesses lower
                // than actual number
                if (guess > find)
                {
                    printf("Lower number please!\n");
                    system("sleep 5s");
                    num_guesses++;
                }
 
                // When user guesses higher
                // than actual number
                else if (find > guess)
        
                {
                    printf("Higher number please!\n");
                    system("sleep 5s");
                    num_guesses++;
                }
        
                // Printing number of times
                // user has taken to guess
                // the number
                else{
                    printf("You guessed the number in %d attempts!\n", num_guesses);
                }
                    
 
            } while (guess != find);
    }
    else if(difficulty == 2)
    {
        find = rand() % 101;
            do {
                system("clear");
                printf("Guess a number between 0 and 100\n");

                if (num_guesses > 9) {
                    printf("\nYou Loose!\n");
                    system("sleep 5s");
                    break;
                }
        
                // Input by user
                scanf("%d", &guess);
        
                // When user guesses lower
                // than actual number
                if (guess > find)
                {
                    printf("Lower number please!\n");
                    system("sleep 5s");
                    num_guesses++;
                }
 
                // When user guesses higher
                // than actual number
                else if (find > guess)
        
                {
                    printf("Higher number please!\n");
                    system("sleep 5s");
                    num_guesses++;
                }
        
                // Printing number of times
                // user has taken to guess
                // the number
                else{
                    printf("You guessed the number in %d attempts!\n", num_guesses);
                }
                    
 
            } while (guess != find);
    }
    else if (difficulty < 0 && difficulty > 2)
    {
        difficulty = 0; //default
        printf("Wrong input");
    }
    
    system("sleep 5s");
}

void start(void)
{

    int option = 0;
    while (option != 2)
    {
        system("clear");
        printf("        Main Menu\n\n");
        printf("    0 - Settings\n");
        printf("    1 - Play\n");
        printf("    2 - Exit\n");
        printf("    ::");
        scanf("%d", &option);

        switch (option)
        {
            case 0:
            {
                difficulty = defineSettings();
            }break;
            case 1: play();break;
            case 2:
            {
                system("clear");
                printf("        GOING AWAY HAHAHA...\n\n");
                system("sleep 3s");
                
            }break;
        }
    }
    
    system("clear");

}


