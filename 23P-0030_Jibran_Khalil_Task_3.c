#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_Dice(void)
{
    srand(time(NULL));
    return 1 + rand() % 6; // radom number between  [0-6]
}

int main(void)
{

    printf("the random number us : %d", roll_Dice());

    return 0;
}
