#include <stdio.h>
int diameter;
float lice_size = 14.125;
void read_diameter(void)
{
    printf("Enter the diameter of piza in inches : ");
    scanf("%d", &diameter);
}
int slices(void)
{
    int radius = diameter / 2.0;
    int area = (3.14) * (radius * radius);
    return area / lice_size;
}
int main(void)
{
    read_diameter();
    printf("The piza with a diameter of %d inches can be divided into %d slices", diameter, slices());
    return 0;
}