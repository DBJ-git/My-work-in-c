#include<stdio.h>
#include<string.h>

int main() {
    char first[100];                       //But if we enter full name it also count space as character
                                           //what to do when we don't want to count space
    printf("Enter your first name :");
    fgets(first,100,stdin);

    puts(first);

printf("Length of your name is %d.",strlen(first));

    return 0;
}
