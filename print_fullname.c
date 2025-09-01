#include<stdio.h>

void print(char arr[]);

int main() {
    char fullname[] = "DivyJoshi";

    print(fullname);
    printf("\n");  

    return 0;
}

void print(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c\t", arr[i]);  
    }
}
