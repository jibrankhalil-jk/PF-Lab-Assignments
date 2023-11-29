#include <stdio.h>
#include <string.h>

char toSmall(char alphabet);
int countVowels(char str[]);
void count_consonants_vowels(char str[]);
char toSmall(char alphabet);

int main()
{
    char inpstr[100];
    char newstr[100];
    char input;

    do
    {
        printf("\nEnter a string: ");
        scanf("%s", inpstr);

        printf("\n-----------------------------\n");
        printf("A) Count the number of vowels in the string\n");
        printf("B) Count both the vowels and consonants in the string\n");
        printf("C) Compare another string with the string\n");
        printf("D) Concatenate another string with the existing string\n");
        printf("E) Exit the program\n");
        printf("\n-----------------------------\n");
        printf("\tinput options:");
        scanf(" %c", &input);
        switch (input)
        {
        case 'A':
        case 'a':
            printf("Total vowels: %d\n", countVowels(inpstr));
            break;
        case 'B':
        case 'b':
            count_consonants_vowels(inpstr);
            break;
        case 'C':
        case 'c':
            printf("Enter another string to compare: ");
            scanf("%s", newstr);
            if (strcmp(inpstr, newstr) < 0)
            {
                printf("The first string is less than the second string.\n");
            }
            else if (strcmp(inpstr, newstr) > 0)
            {
                printf("The first string is greater than the second string.\n");
            }
            else
            {
                printf("Both strings are equal.\n");
            }
            break;
        case 'D':
        case 'd':
            printf("Enter a new string to concatenate: ");
            scanf("%s", newstr);
            printf("\nConcatenated String : %s\n", strcat(inpstr, newstr));
            break;
        case 'E':
        case 'e':
            printf("Exit\n");
            break;
        default:
            printf("Invalid input.try again\n");
        }
    } while (input != 'e' && input != 'E');

    return 0;
}

int countVowels(char str[])
{
    int vowels = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        char ch = toSmall(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        i++;
    }
    return vowels;
}

void count_consonants_vowels(char str[])
{
    int vowels = 0, consonants = 0, i = 0;
    while (str[i] != '\0')
    {
        char ch = toSmall(str[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);
}

char toSmall(char alphabet)
{
    if (alphabet >= 65 && alphabet <= 90)
    {
        return 'a' + (alphabet - 'A');
    }
    return alphabet;
}
