#include <stdio.h>

int main()
{
    int rows;
    int i = 1;
    printf(" Enter row: ");
    scanf("%d", &rows);
    while (i <= rows)
    {
        for (int j = rows; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}
