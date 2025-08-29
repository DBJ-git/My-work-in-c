#include<stdio.h>          // 16

int main{
    int age;

    printf("Enter your age :");
    scanf("%d", &age);

    (age >= 18) ? printf("You are adult.\n") : printf("You are not adult.\n");

    return 0;

}
