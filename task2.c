#include <stdio.h>
int sec;
void sec_converter(void){
    int minutes , hours , remsec;
    minutes = sec / 60;
    hours = minutes / 60;
    minutes = minutes - (hours * 60);
    remsec = sec - ((hours *60*60)+(minutes * 60));
    printf("%02d:%02d:%02d",hours,minutes,remsec);
}
int main(void){
    printf("Enter the total number of seconds: ");
    scanf("%d", &sec);
    sec_converter();
    return 0;
}