#include<stdio.h>         // 11

int main() {
    float a,b,c;

    printf("Enter first number : ");
    scanf("%f", &a);

    printf("Enter second number : ");
    scanf("%f", &b);

    printf("Enter third number : ");
    scanf("%f", &c);

    printf("Average of these number is : %f\n",(a + b +c) / 3);

    return 0;
}
