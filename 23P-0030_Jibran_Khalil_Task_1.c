#include <stdio.h>

void Transpose();
void Transpose(int rows, int columns, int matrix[1][1]);

int main()
{
    int rows, columns;
    printf("How many rows? ");
    scanf("%d", &rows);
    printf("How many columns? ");
    scanf("%d", &columns);

    int matrixa[rows][columns];
    int matrixt[columns][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the value for index %d%d:  ", i, j);
            scanf("%d", &matrixa[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrixa[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrixt[j][i] = matrixa[i][j];
        }
        printf("\n");
    }

    printf("\n\n\n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", matrixt[i][j]);
        }
        printf("\n");
    }

    return 0;
}
