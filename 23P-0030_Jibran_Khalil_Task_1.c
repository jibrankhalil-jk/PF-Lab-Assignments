
#include <stdio.h>

int main()
{
    int alphabet;

    printf("Enter an alphabet");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'A':
        printf("%c is a vovel", alphabet);
        break;
    case 'e':
    case 'E':
        printf("%c is a vovel", alphabet);
        break;
    case 'i':
    case 'I':
        printf("%c is a vovel", alphabet);
        break;
    case 'o':
    case 'O':
        printf("%c is a vovel", alphabet);
        break;
    case 'u':
    case 'U':
        printf("%c is a vovel", alphabet);
        break;
    default:
        printf("%c is Not a vovel", alphabet);
    }

    return 0;
}