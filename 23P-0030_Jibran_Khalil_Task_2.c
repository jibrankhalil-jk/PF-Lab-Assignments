#include <stdio.h>

const int students = 4;
const int subjects = 3;

int main()
{
    int highest = 0, lowest = 1000;
    int marks[students][subjects];
    int Totalmarks[] = {0, 0, 0, 0};

    for (int i = 0; i < students; i++)
    {
        printf("Enter the total marks for student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            Totalmarks[i] += marks[i][j];
            if (highest < marks[i][j])
            {
                highest = marks[i][j];
            }

            if (lowest > marks[i][j])
            {
                lowest = marks[i][j];
            }
        }
    }

    for (int j = 0; j < students; j++)
    {
        printf("Total Marks for student %d: %d\n", j + 1, Totalmarks[j]);
    }

    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);

    return 0;
}