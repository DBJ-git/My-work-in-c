#include<stdio.h>

void swap(int *a, int *b);

int main() {
    int x;
    int y;

    printf("Enter a value of x :");
    scanf("%d", &x);

    printf("Enter a value of y :");
    scanf("%d", &y);

    swap(&x,&y);

    return 0;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("x = %d & y = %d.\n",*a, *b);
}
