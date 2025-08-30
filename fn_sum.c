#include<stdio.h>       // 44

int sum(int a,int b);

int main() {
    int a;
    int b;
    int result;

    printf("Enter first number :");
    scanf(" %d ", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    result = sum(a,b);

    printf("Your sum is %d.\n",result);


    return 0;
}

int sum(int a, int b) {
    return a + b;
}
