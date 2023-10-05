#include <stdio.h>

int main(void)
{
    int amount, items, discount, shipcharges;
    printf("Enter the total amount spent on shopping (in R.s): ");
    scanf("%d", &amount);
    printf("Enter the number of items purchased : ");
    scanf("%d", &items);

    if (amount >= 5000)
    {
        // 10 descount
        discount = (amount * 10) / 100;
        printf("\nCongratulation you got 10 percent of ");
    }

    if (items >= 10){
        // freeshiping
        shipcharges = 0;
        printf("\nCongratulation! you got free shipping ");
    }
    else
    {
        // shipping charges 100
        shipcharges = 100;
        printf("\nShipping charges: 100 R.s");
    }

    printf("\nTotal amount to be paid: %d R.s",amount-discount+shipcharges); // adding discount and shipping charges

    return 00;
}