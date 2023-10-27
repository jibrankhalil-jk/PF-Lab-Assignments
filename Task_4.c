#include <stdio.h>

int main()
{

    char c;
    int row;
    printf(" Enter a character : ");
    scanf("%c", &c);
    printf(" Enter row: ");
    scanf("%d", &row);
    int i = row;
    while (i >= 1)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", c);
        }

        printf("\n");
        i--;
    }

    return 0;
}