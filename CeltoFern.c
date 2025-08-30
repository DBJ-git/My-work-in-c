#include<stdio.h>     // 52

float CeltoFern(float t);

int main(){

    printf("Final tempreture is %f.\n",CeltoFern(0));

    return 0;
}

float CeltoFern(float t){
    float FT = (9.0/5) * t + 32;
    return FT;
}
