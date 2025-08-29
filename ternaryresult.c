#include<stdio.h>       // 18

// short programme by ternary operator

int main() {
    int marks;

    printf("Enter your marks :");
    scanf("%d", &marks);
 
    (marks >= 30) ? printf("You are pass.Congratulation!\n") : printf("You are fail.Better luck next time!\n");

    return 0;
}
