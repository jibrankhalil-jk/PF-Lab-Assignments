#include <stdio.h>

int main(void)
{

    int marks;

    printf("Enter your Score : ");
    scanf("%d", &marks);

    if (marks >= 60)
    {

        printf("Passed \n");
    }
    else
    {
        printf("Try next time\n");
    }

    printf("You Got: ");

    if (marks >= 90 && marks <= 100)
    {
        printf("A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("B");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    printf(" Grade");

    return 00;
}