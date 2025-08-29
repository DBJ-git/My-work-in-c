#include<stdio.h>         // 8

int main() {              // for even output == 1
                          // for odd outpur == 0

    int n;

    printf("Enter a number : \n");
    scanf("%d", &n);

    printf("Your number is %d\n",n % 2 == 0);
   
    return 0;
}
