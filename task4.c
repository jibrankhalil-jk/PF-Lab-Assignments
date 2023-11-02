#include <stdio.h>

int searchBusStop(int query, int num, int stops[])
{

    for (int i = 0; i < num; i++)
    {
        if (query == stops[i])
        {
            return i + 1;
        }
    }
    return -1;
}

int highestpass(int num, int stops[])
{
    int high;
    int index;
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            high = stops[i];
        }
        if (stops[i] > high)
        {
            high = stops[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int n = 4;
    int busStops[] = {1, 3, 2, 4};
    int passerngers[] = {27, 43, 8, 42};
    int q = 3;

    printf("Bus stops :  ");

    for (int i = 0; i < n; i++)
    {
        i != 0 ? printf(",") : 0;
    
            printf("%d", busStops[i]);
        
    }
    printf("\nPessengers : ");

    for (int i = 0; i < n; i++)
    {
        i != 0 ? printf(",") : 0;

        printf("%d", passerngers[i]);
    }

    while (1)
    {
        printf("\nEnter a bus stop to search :");
        scanf("%d", &q);

        if (searchBusStop(q, n, busStops) == -1)
        {
            printf("No stop found...");
        }
        else
        {
            printf("\nThe bus stop %d is at index %d \n", q, searchBusStop(q, n, busStops));
            printf("\n  The bus %d is having highest number of passangers.\n  Total passengers are %d \n", busStops[highestpass(n, busStops)], passerngers[highestpass(n, busStops)]);
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += passerngers[i];
            }
            float avg = sum / 4.0;
            printf("Average is %.3f \n", avg);
            for (int i = 0; i < n; i++)
            {
                if (passerngers[i] > avg)
                {
                    printf("\nBus Stop %d have higher passengerss than average: %d", busStops[i],passerngers[i]);
                }
            }
            break;
        }
    }

    return 0;
}
