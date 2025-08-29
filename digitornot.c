#include<stdio.h>        // 13

int main() {
    char x;

    printf("Enter a character: ");
    scanf("%c", &x);

    if(x >= '0' && x <= '9'){
        printf("your character %c is a digit",x);
    }else {
        printf("your character %c is not a digit",x);
    }

 return 0;
}
