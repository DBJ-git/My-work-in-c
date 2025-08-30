#include<stdio.h>    // 53

float CeltoFern(float t);   // with input value is given by user

int main() {
    float t;

    printf("Enter temperature :");
    scanf("%f", &t);

    printf("Final temperature is %f. \n",CeltoFern(t));

    return 0;
}

float CeltoFern(float t){
    float FT = (9.0 / 5.0) * t + 32;
    return FT;
}
