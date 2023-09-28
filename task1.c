#include<stdio.h>
float bmi(float m, float kg){
return (kg/(m*m));
}
int main(void){
    float height, weight;
    printf("Enter your height in meters : ");
    scanf("%f",&height);
    printf("Enter your weight in kilograms : ");
    scanf("%f",&weight);
    printf("BMI: %.3f",bmi(height,weight));
    return 0;
}