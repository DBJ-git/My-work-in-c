#include<stdio.h>           // 37

int main() {                       // comtinue skip the number

    for(int i = 5; i <= 50; i++){
        if(i % 2 == 0) {
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}
