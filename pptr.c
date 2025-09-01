#include<stdio.h> 

int main() {
    int i;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Enter a value of i = ");
    scanf("%d", &i);

    printf("%d\n",**pptr);

    return 0;
}
