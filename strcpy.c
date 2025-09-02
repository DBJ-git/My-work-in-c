#include<stdio.h>
#include<string.h>

int main() {
    char newStr[100] = "newStr";
    char oldStr[100] = "oldStr";

    strcpy(newStr,oldStr);

    printf("Value of newStr is now %s.\n",newStr);
    return 0;
}
