#include <stdio.h>

int main()
{
    int ratings[10];

    int highest = 0, lowest = 0, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("\nEnter %d review between 1 - 5:", i);
        scanf("%d", &ratings[i]);

        if (ratings[i]>=1 &&ratings[i]<=5)
        {

            if (i == 1)
            {
                lowest = ratings[i];
            }
            if (ratings[i] > highest)
            {
                highest = ratings[i];
            }

            if (lowest > ratings[i])
            {
                lowest = ratings[i];
            }

            sum += ratings[i];
        }else{
                printf("\nEnter between 1 and 5");
                i--;
                continue;
        }
    }

    printf("The lowest number is : %d\n", lowest);
    printf("The highest number is : %d\n", highest);
    printf("The Average is number is : %.3f\n", sum / 10.0);

    return 0;
}