#include<stdio.h>

int main(){
    float price[3];

    printf("Enter price of product 1 :");
    scanf("%f", &price[0]);

    printf("Enter price of product 2 :");
    scanf("%f", &price[1]);

    printf("Enter price of product 3 :");
    scanf("%f", &price[2]);
    

    printf("Final price of product 1 is : %f.\n ",price[0] + (0.18 * price[0]));
    printf("Final price of product 2 is : %f.\n ",price[1] + (0.18 * price[1]));
    printf("Final price of product 3 is : %f.\n ",price[2] + (0.18 * price[2]));

    printf("Total price of all three items is %f.\n",(price[0] + (0.18 * price[0]) + price[1] + (0.18 * price[1]) + price[2] + (0.18 * price[2])));
  
    return 0;
}
