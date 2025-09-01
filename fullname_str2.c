#include<stdio.h>

int main() {
    char first[100];
    char last[100];

    printf("Enter your first and last name : ");
    scanf("%s %s",first,last);

    printf("%s\t",first);
    printf("%s\t",last);

    return 0;
}
