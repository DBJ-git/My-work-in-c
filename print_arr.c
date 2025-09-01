#include<stdio.h>

void print(char arr[]);

int main() {

    char first[] = "Divy";
    char last[] = "Joshi";

    print(first);
    printf("/n");
    print(last);
    printf("/n");

    return 0;
}

void print(char arr[]){
    for(int i = 0 ; arr[i] != '\0' ; i++){
        printf("%c",arr[i]);
    }
}
