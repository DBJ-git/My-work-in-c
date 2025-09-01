#include<stdio.h>

int main() {
    char ch = 'A';
    char *ptr = &ch;

    do{
        printf("%c\n",*ptr);
        (*ptr)++;
    }while(ch <= 'Z');

    return 0;
}
