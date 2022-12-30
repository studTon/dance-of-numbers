#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void title_bar(void){
    int i = 0;
    while(i < 32){
        printf("*");
        i += 1;
    }
    printf("\n");
}

void title(void) {
    printf("\n\nDANCE OF NUMBERS\n\n");
}

void menu(void) {
    int option = 1;

    while(option != 0) {
        system("@cls");

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
        case 1: {
            //play game function
            printf("OK");
            break;
        }
        default:
            break;
        }
        
    }
    
    
}

