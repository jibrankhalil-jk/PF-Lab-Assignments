#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(void);
void loading(void);

int main()
{
    char input;
    int loop = 1;
    do
    {
        menu();
        printf("\n Menu:");
        scanf("%c", &input);
        switch (input)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '8':
        case '9':
        case '0':
            loading();
            system("cls");
            menu();
            // loop = 0;
            break;
        default:
            system("cls");
            break;
        }
    } while (loop == 1);

    loading();

    //         printf("[");

    //     for (int j = 1; j <= 7; j++)
    // {
    //     for (int i = 1; i <= 1; i++)
    //     {
    //         printf(".]");
    //     }
    //     _sleep(700);
    // }

    return 0;
}

void menu(void)
{

    printf("\n______________________________________");
    printf("\n\n|-------E.M launching System---------|");
    printf("\n______________________________________");
    printf("\n|                                    |");
    printf("\n|\t1.Single Misile Launch\t     |");
    printf("\n|\t2.Multiple Misile Launch     |");
    printf("\n|\t3.Time  Misile Launch        |");
    printf("\n|                                    |");
    printf("\n|\t4.History                    |");
    printf("\n|\t8.Misiels status             |");
    printf("\n|\t9.Misiles Setting            |");
    printf("\n|\t0.Help\t\t\t     |");
    printf("\n|------------------------------------|");
    printf("\n\tAvailable = %d                      ", 3);
    printf("\n|------------------------------------|\n");
}

void loading(void)
{

    printf("\n");
    system("cls");

    for (int j = 7; j >= 1; j--)
    {

        printf(".");

        // _sleep(700);
    }
}
