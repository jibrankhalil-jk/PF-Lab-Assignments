#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = '-';
    }

    srand(time(NULL));
    int treasureIndex = rand() % 10;
    array[treasureIndex] = '*';
    char *ptr = array;

    for (int i = 0; i < 10; i++)
    {
        printf("index = %d , %c\n", i, *ptr);
        if (*ptr == '*')
        {
            printf("Yayyy treasure found, index = %d \n", i);
            break;
        }
        ptr++;
    }

    ptr = array;

    printf("Array addresses \n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Index %d: %c Address: %d | %p \n", i, *ptr, ptr, ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
