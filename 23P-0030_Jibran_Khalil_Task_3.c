#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("\n%d,%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sumofSingleRow = 0;
    for (int j = 0; j < size; j++)
    {
        sumofSingleRow += matrix[0][j];
    }

    int ismaglical = 1;
    while (1)
    {
        for (int i = 1; i < size; i++)
        {
            int rowSum = 0;
            for (int j = 0; j < size; j++)
            {
                rowSum += matrix[i][j];
            }
            if (rowSum != sumofSingleRow)
            {
                ismaglical = 0;
                break;
            }
        }

        if (ismaglical == 0)
        {
            break;
        }

        for (int j = 0; j < size; j++)
        {
            int colSum = 0;
            for (int i = 0; i < size; i++)
            {
                colSum += matrix[i][j];
            }
            if (colSum != sumofSingleRow)
            {
                ismaglical = 0;
                break;
            }
        }

        if (ismaglical == 0)
        {
            break;
        }

        int leftDiagonalSum = 0;
        for (int i = 0; i < size; i++)
        {
            leftDiagonalSum += matrix[i][i];
        }
        if (leftDiagonalSum != sumofSingleRow)
        {
            ismaglical = 0;
            break;
        }

        int rightDiagonalSum = 0;
        for (int i = 0; i < size; i++)
        {
            rightDiagonalSum += matrix[i][size - 1 - i];
        }

        if (rightDiagonalSum != sumofSingleRow)
        {
            ismaglical = 0;
            break;
        }

        break;
    }

    if (ismaglical == 1)
    {
        printf("This is a magic square.\n");
    }
    else
    {
        printf("This is not a magic square.\n");
    }

    return 0;
}
