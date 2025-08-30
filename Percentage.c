#include<stdio.h>    //  54

float Percentage(float M,float S,float Sk);

int main() {
    float M;
    float S;
    float Sk;

    printf("Enter marks of Maths :");
    scanf("%f", &M);

    printf("Enter marks of Science :");
    scanf("%f", &S);

    printf("Enter marks of Sanskrit :");
    scanf("%f", &Sk);

    printf("your Percentage is %f.\n",Percentage(M,S,Sk));

    return 0;
}


float Percentage(float M,float S,float Sk){
    float FP = (M + Sk + S) / 300 * 100;
    return FP;
}
