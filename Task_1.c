#include <stdio.h>

int factorial(float num);

int main()
{

    float num, sum = 0.0;
    printf(" Enter a number : ");
    scanf("%f", &num);

    for (float i = 1.0; i <= num; i++)
    {
        sum = sum + i / factorial(i);
        printf("i: %.0f  sum: %f", i,  sum);
        printf("\n");
    }

    printf("Final sum: %f", sum);

    return 0;
}

int factorial(float num)
{
    int i = num, factorial = 1;
    while (i >= 1)
    {
        factorial *= i;
        i--;
    }
    return factorial;
}