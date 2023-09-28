#include <stdio.h>

const int unit_price = 5;

int sep_bill(int prev_units, int present_units)
{
    int s_units = present_units - prev_units;
    printf("September uits are : %d", s_units);
    return s_units * unit_price;
}

int main(void)
{
    int pu, presu;
    printf("Enter the previous units : ");
    scanf("%d", &pu);
    printf("Enter the present units : ");
    scanf("%d", &presu);
    printf("\nSeptember bill is : %d ", sep_bill(pu, presu));

    return 0;
}
