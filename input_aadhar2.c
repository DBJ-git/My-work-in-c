#include<stdio.h>

int main() {
                        // This code's output more logicable and understandable by user && coder
    int aadhar[5];
    
    for(int i = 0; i <= 4; i++) {
        printf("Enter value for aadhar[%d]:\n", i);
        scanf("%d", &aadhar[i]);
    }

    for(int i = 0; i <= 5; i++) {
        printf("Aadhar index %d is %d.\n", i, aadhar[i]);
    }

    return 0;
}
