#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i = num, factorial = 1;
    while (i >= 1)
    {
        factorial *= i; 
        i--;
    }

    printf(" Factrorial = %d \n", factorial);
    return 0;
}
