#include<stdio.h>

int main() {

    int aadhar[5];

    for(int i = 0; i <= 4; i++){
        printf("Enter value for index %d:\n", i);  
        scanf("%d", &aadhar[i]);
    }

    for(int i = 0; i <= 4; i++){
        printf("Aadhar index %d is %d.\n", i, aadhar[i]);
    }

    return 0;
}
