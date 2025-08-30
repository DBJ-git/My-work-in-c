#include<stdio.h>     // 46

void calculatePrice(float value);

int main() {
    float value;

    printf("Enter price of a product :");
    scanf("%f", &value);

    printf("value is = %f\n");

    calculatePrice(value);

    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("final price is = %f\n",value);
}
