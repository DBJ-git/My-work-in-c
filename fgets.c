#include<stdio.h>

int main() {
    char name[100];

    printf("Enter your full name :");
    fgets(name,100,stdin);

    puts(name);

    return 0;
}
