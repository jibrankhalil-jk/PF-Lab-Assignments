#include<stdio.h>
void tem_convert(float cel){
    float f = (9.0/5.0)*cel+32;
    printf("%.2f degrees Celcius is equal to %.2f degree Farenheit",cel,f);
}
int main(void){
  float temp;
  printf("Enter temprature in Celcius: ");
  scanf("%f",&temp);
  tem_convert(temp);
    return 0;
}