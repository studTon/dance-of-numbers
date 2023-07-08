#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sort_number(int max_number)
{

    int r;
    srand(time(NULL));
    r = (rand() % max_number) + 1;

    return r;
}

bool guess(int guess_number)
{
    /*
    Receive a number to verify whether it's 
    higher or lower than the sorted number
    */
}