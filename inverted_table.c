#include<stdio.h>       // 39
#include<math.h>

int main() {
    int n;

    printf("Enter a number :");
    scanf("%d", &n);

    for(int i = 10 ; i >= 1 ; i--) {
        printf("%d\n",i*n);
    }
    return 0;
}
