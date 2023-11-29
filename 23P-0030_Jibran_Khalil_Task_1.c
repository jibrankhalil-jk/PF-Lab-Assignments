#include <stdio.h>
#include <string.h>

int isaPalindrome(char string[]);

int main()
{
    char input[100];
    printf("Enter a string without spaces:");
    scanf("%s", input);
    if (isaPalindrome(input))
    {
        printf("%s is a palindrome.\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}

int isaPalindrome(char string[])
{
    int l = strlen(string);
    char revstring[l];
    int i = 0;
    int j = l - 1;
    while (i < j)
    {
        if (string[i] != string[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}