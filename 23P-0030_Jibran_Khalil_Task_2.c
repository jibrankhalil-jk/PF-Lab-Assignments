#include <stdio.h>

int main()
{

    float subjects;
    printf("Total Number of Subjects : ");
    scanf("%f", &subjects);

    int i = 1,
        marks = 0,
        obtain = 0, percentage;
    while (i <= subjects)
    {
        scanf("%d", &marks);
        obtain += marks;
        i++;
    }
    printf(" Subjects = %.0f\n", subjects);
    printf(" Obtain = %d\n", obtain);
    printf(" Total = %.0f\n", subjects * 100);
    printf(" Average = %.3f\n", (obtain / subjects ));
    printf(" Percentage = %.3f\n", (obtain / (subjects * 100) * 100.0));

    return 0;
}
