#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50];
    char lastName[50];
    char fullName[100] = "";

    printf("Enter your firstname: ");
    scanf("%s", firstName);

    printf("Enter your lastname: ");
    scanf("%s", lastName);
    int size = sizeof(fullName);
    int strlength = strlen(fullName) - 1;
    strncat(fullName, firstName, size - 1);
    strncat(fullName, " ", size - strlength);
    strncat(fullName, lastName, size - strlength - 1);

    printf("\nFirst Name: %s , Last Name: %s \n", firstName, lastName);
    printf("Full Name: %s\n", fullName);

    return 0;
}
