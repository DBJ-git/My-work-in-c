#include <stdio.h>

int main() {
    int a;
    int b;

    int *ptr = &a;
    int *ptr1 = &b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int Maximum;

    if (*ptr >= *ptr1) {
        Maximum *ptr;}
     else {
        Maximum *ptr1;
    }

    printf("Maximum number is %d\n", Maximum);

    return 0;
}
