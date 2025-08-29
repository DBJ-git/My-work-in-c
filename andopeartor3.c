#include<stdio.h>         // 12

int main() {
    char x;

    printf("Enter a character: ");
    scanf("%c", &x);

    printf("%d\n", x >= '0' && x <= '9');

    return 0;

}
