#include<stdio.h>

const int cb_profilt_percentage = 20; // constant profit prencentsge 20%

void bill_calculator(int original_price){ //  function taking one arugument  (original price)
int profit  = (original_price/100)*cb_profilt_percentage; // calculating the profit
int sellingprice = profit + original_price; //  adding profit to original price
printf("\nOriginal Price : %d",original_price); 
printf("\nProfit : %d",profit);
printf("\nSelling Price : %d",sellingprice);
}


int main(void){
    // taking original price from 
    int price;
    printf("Enter the original price : ");
    scanf("%d",&price);
    bill_calculator(price);
        return 0;
}