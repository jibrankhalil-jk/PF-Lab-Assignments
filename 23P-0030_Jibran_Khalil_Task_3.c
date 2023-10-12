#include <stdio.h>
int Burger = 300,
    fries_cold_drink = 150,
    Half_biryani = 120,
    Full_Biryani = 240,
    Chicken_piece = 70;

void choice_with_biryani_plat(int choice_with_plat_biryani);

int main(void)
{
    int choice_1, choice_with_burger, choice_with_biryani, choice_with_plat_biryani;
    printf("You want Burger or Biryani ");
    printf("\n1. Burger\n2. Biryani\n");
    scanf("%d", &choice_1);

    if (choice_1 == 1)
    {
        printf("\nYou want add-on of fries or cold drink");
        printf("\n1. Yes\n2. No\n");
        scanf("%d", &choice_with_burger);
        if (choice_with_burger == 1)
        {
            printf("Total Bill \n");
            printf(" 1 Burger Rs %d \n", Burger);
            printf(" 1 Fries and Cold dink Rs %d \n", fries_cold_drink);
            printf("\nTotal Rs %d",Burger+fries_cold_drink);

        }
        else if (choice_with_burger == 2)
        {
            printf(" 1 Burger Rs %d \n", Burger);
            printf("\nTotal Rs %d",Burger);

        }
        else
        {

            printf("Invalid Value");
        }
    }
    else if (choice_1 == 2)
    {
        printf("\nYou want Half or full biryani");
        printf("\n1. Half\n2. Full\n");
        scanf("%d", &choice_with_biryani);

        if (choice_with_biryani == 1 || choice_with_biryani == 2)
        {
            choice_with_biryani_plat(choice_with_biryani);
        }
        else
        {
            printf("Invalid Value");
        }

        return 0;
    }
}
void choice_with_biryani_plat(int choice_with_biryani)
{
    int choice_with_plat_biryani;
    printf("\nYou want chicken piece or not");
    printf("\n1. yes\n2. No\n");
    scanf("%d", &choice_with_plat_biryani);
    if (choice_with_plat_biryani == 1 || choice_with_plat_biryani == 2)
    {
       

        if (choice_with_biryani == 1)
        {
            if (choice_with_plat_biryani == 1)
            {
                printf("Total Bill \n");
                printf(" 1 Half Biryani Rs %d \n", Half_biryani);
                printf(" 1 chicken piece Rs %d \n", Chicken_piece);
                printf("\nTotal Rs %d",Half_biryani+Chicken_piece);

            }
            else if (choice_with_plat_biryani == 2)
            {
                printf("Total Bill \n");
                printf(" 1 Half Biryani Rs %d \n", Half_biryani);
                printf("\nTotal Rs %d",Half_biryani);

            }
            else
            {
                printf("Invalid Value");
            }
        }else  if (choice_with_biryani == 2)
        {
            if (choice_with_plat_biryani == 1)
            {
                printf("Total Bill \n");
                printf(" 1 Full Biryani Rs %d \n", Full_Biryani);
                printf(" 1 chicken piece Rs %d \n", Chicken_piece);
                printf("\nTotal Rs %d",Full_Biryani+Chicken_piece);

            }
            else if (choice_with_plat_biryani == 2)
            {
                printf("Total Bill \n");
                printf(" 1 Full Biryani Rs %d \n", Full_Biryani);
                printf("\nTotal Rs %d",Full_Biryani);

            }
            else
            {
                printf("Invalid Value");
            }
        }
    }

    else
    {
        printf("Invalid Value");
    }
}