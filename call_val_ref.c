#include<stdio.h>

void square(int n);
void _square(int *n);

int main() {
    int number = 4;

    square(number);
    printf("original = %d\n", number);  // call by value

    _square(&number);
    printf("%d\n",number);  // call by refrence

    return 0;
}

void square(int n){
     n = n * n;
    printf("%d\n",n);
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("%d\n",*n);
}
