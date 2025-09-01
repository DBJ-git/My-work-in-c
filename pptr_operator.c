#include <stdio.h>

int main() {
    int i;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Enter a value of i = ");
    scanf("%d", &i);

    printf("Original value: %d\n", **pptr);

    // Modify i via double pointer
    **pptr = 100;

    printf("Modified value: %d\n", i);

    return 0;
}
