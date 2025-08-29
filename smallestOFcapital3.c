#include<stdio.h>           // 14

int main() {
    int a,b,c;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Enter third number : ");
    scanf("%d", &c);

    int smallest;

    if (a <= b && a <= c)
       smallest a;
    else if (b <= a && b <= c)
       smallest b;
    else 
    smallest c;

    printf("Smallest number is %d", smallest);

    return 0;
}
