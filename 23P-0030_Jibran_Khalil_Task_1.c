#include <stdio.h>

void print_Table(int n);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_Table(num);
    return 0;
}

void print_Table(int n)
{
    int i = 1;
    for (; i <= 10;)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
        i++;
    }
}