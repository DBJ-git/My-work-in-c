#include<stdio.h>                     // 21

int main() {
    char ch;

    printf("Enter a character :");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("You entered Lower case character.\n");
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("You entered Upper case character.\n");
    }
    else {
        printf("You entered nither Upper case or Lower case character.\n");
    }
    
    printf("Thank you\n");

    return 0;
}
