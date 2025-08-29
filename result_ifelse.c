#include<stdio.h>                // 19

// long but very accurate programme by if - else

int main() {
    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if(marks >= 30 && marks <= 100) {
        printf("You are Pass.Congratulation!\n");
    }
     else if(marks >= 0 && marks < 30) {
        printf("You are Fail.Better luck next time!\n");  
    }
    else {
        printf("You entered wrong marks.oops!\n");
    }
    
    printf("Thank you!\n");

    return 0;
}
