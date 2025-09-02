#include <stdio.h>
#include <string.h>

void replace(char str[]);
void printArr(char str[]);

int main() {
    char str[100] = "HelloWorld";

    replace(str);
    printArr(str);

    return 0;
}

void replace(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'A';
        } else if (str[i] == 'e') {
            str[i] = 'E';
        } else if (str[i] == 'i') {
            str[i] = 'I';
        } else if (str[i] == 'o') {
            str[i] = 'O';
        } else if (str[i] == 'u') {
            str[i] = 'U';
        }
    }
}

void printArr(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
