#include<stdio.h>

void doWork(float a,float b);

int main() {
    float a;
    float b;

    printf("Enter a value of a :");
    scanf("%f", &a);

    printf("Enter a value of b :");
    scanf("%f", &b);

    doWork(a,b);

    return 0;
}

void doWork(float a,float b){
    printf("Sum of two number is %f.\n", a + b);
    printf("Product of two number is %f.\n",a * b);
    printf("Average of two number is %f.\n",(a + b)/ 2);
}
