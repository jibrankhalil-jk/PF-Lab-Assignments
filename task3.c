#include <stdio.h>

float calculateAttendence(float shed, float atn){
    return (atn / shed) * 100.0;
}


int main(void)
{

    float sheduled, attended, percent;

    printf("Enter total classes sheduled : ");
    scanf("%f", &sheduled);
    printf("Enter total classes attended: ");
    scanf("%f", &attended);

    percent = calculateAttendence(sheduled,attended);
    printf("You attendence is %.0f%%",percent);

    if(percent >= 80){
        printf("\nyou are allowed to sit in the exams");
    }else{
        printf("\nyou are not allowed to sit in the exams");

    }


    return 00;
}