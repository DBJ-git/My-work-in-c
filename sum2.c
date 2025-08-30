#include<stdio.h>       // 40
#include<math.h>

int main() {
    int sum = 0;

    for(int i = 5;i <= 50;i++) {
        sum = sum + i;
    }
    printf("your sum is %d\n", sum);

    return 0;
}
