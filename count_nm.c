#include<stdio.h>

void count(char arr[]);

int main() {
    char first[100];

    printf("Enter your first name : ");
    fgets(first,100,stdin);

    puts(first);

    count(first);
    
    return 0;
}

void count(char arr[]) {
    int count = 0;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        count ++;
    }
    printf("%d",count - 1);
}
