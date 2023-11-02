#include <stdio.h>

int main()
{

    int arra[10];

    int evens = 0, odds = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter %d element : ", i + 1);

        scanf("%d", &arra[i]);
    }

    int i = 0;
    while (i < 10)
    {
        if (arra[i] % 2 == 0)
        {
            printf("\n%d  is even", arra[i]);
            evens++;
        }
        else
        {
            printf("\n%d  is odd", arra[i]);
            odds++;
        }
        i++;
    }

    printf("\nTotal Even Numbers : %d", evens);
    for (int i = 0; i < 10; i++)
    {
        if (arra[i] % 2 == 0)
        {
            printf("\n%d", arra[i]);
        }
    }
    printf("\nTotal Odds Numbers : %d", odds);
    for (int i = 0; i < 10; i++)
    {
        if (arra[i] % 2 != 0)
        {
            printf("\n%d", arra[i]);
        }
    }
    return 0;
}