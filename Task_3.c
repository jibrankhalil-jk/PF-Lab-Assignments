#include <stdio.h>

int main()
{

    int a = 0;
    int rows;
    printf(" Enter row: ");
    scanf("%d", &rows);
    int i = rows;
    while (i >= 1)
    {

        for (int j = rows - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j - a);
        }
        a--;
        printf("\n");
        i--;
    }

    return 0;
}