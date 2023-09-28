// program to find third angle using two given angles

#include <stdio.h>

int rem_angle(int fangle, int sangle)
{
    return 180 - (fangle + sangle);
}

int main(void)
{
    int first, second;
    printf("Enter the first angle : ");
    scanf("%d", &first);
    printf("Enter the second angle : ");
    scanf("%d", &second);
    printf("The third angle is : %d", rem_angle(first, second));
    return 0;
}