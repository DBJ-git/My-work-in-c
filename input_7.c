#include<stdio.h>      // 36

int main() {
    int n;
do {
    printf("Enter number :");
    scanf("%d", &n);
    printf("%d\n",n);

    if(n % 7 == 0) {
        break;
    }
} while(1);
printf("Thank you.\n"); 

    return 0;
}
