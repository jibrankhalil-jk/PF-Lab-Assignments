#include <stdio.h>

int num1 = 1;
int num2 = 2;

int *pnum1 = &num1;
int *pnum2 = &num2;

void swapvar(int a, int b);

void swapusingpointers(int *a, int *b);

int main()
{

    printf("Original values, number1 = %d ; number2 = %d\n", num1, num2);

    printf("Swap by value\n");
    swapvar(num1, num2);
    printf("number1 = %d ; number2 = %d\n", num1, num2);

    printf("swap by refrence\n");
    swapusingpointers(pnum1, pnum2);
    printf("number1 = %d ; number2 = %d\n", num1, num2);

    return 0;
}

void swapvar(int a, int b)
{
    num1 = b;
    num2 = a;

    //    int temp = a;
    // a = b;
    // b = temp;
}

void swapusingpointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
