#include<stdio.h>

int main() {
    int n;

    printf("Enter n : (n > 2)\n");
    scanf("%d", &n);

    int fib[n];

    fib[1] = 1;
    fib[0] = 0;

    printf("%d\n",fib[0]);
    printf("%d\n",fib[1]);

    for(int i = 2; i < n ; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\n",fib[i]);
    }
    printf("\n");

    return 0;
}
