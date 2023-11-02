#include <stdio.h>

int checkprime(int num);
int main()
{

    int indexl;
    printf("Enter array length : ");
    scanf("%d", &indexl);
    int numbers[indexl];

    for (int i = 0; i < indexl; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < indexl; i++)
    {

        if (checkprime(numbers[i]) == 1 && numbers[i] != 1)
        {
            printf("\n%d  is prime", numbers[i]);
        }
        else
        {
            printf("\n%d  is not prime", numbers[i]);
        }
    }

    return 0;
}

int checkprime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
