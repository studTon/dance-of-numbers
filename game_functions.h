#include <stdio.h>
#include <stdlib.h>
#include "game_library.h"

void menu(void)
{
    int option = 1;

    while (option != 0)
    {
        system("clear");

        title_bar();
        title();
        title_bar();

        printf("\n\nSelect an option:\n\n");
        printf("1 - Play\n");
        printf("0 - Quit\n");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            break;
        case 1:
        {
            play_game();
            break;
        }
        default:
            break;
        }
    }
}
