#include<stdio.h>
#include<string.h>

int main() {
    char first[100] = "Divy";
    char last[100] = "Joshi";

    strcat(first,last);

    printf("Your full name is %s.\n",first);

    return 0;
}
