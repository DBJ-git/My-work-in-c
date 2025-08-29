#include<stdio.h>           // 20
 
int main() {
    int marks;

    printf("Enter your marks :");
    scanf("%d", &marks);

    if(marks >= 0 && marks < 30) {
        printf("Your grade is C.Congratulation!\n");
    }
    else if(marks >= 30 && marks < 70) {
        printf("Your grade is B.Congratulation!\n");
    }
    else if(marks >= 70 && marks < 90) {
        printf("Your grade is A.Congratulation!\n");
    }
    else if(marks >= 90 && marks <= 100) {
        printf("Your grade is A+.Congratulation!\n");
    }
    else{
        printf("You entered wrong marks.Oops!\n");
    }

    return 0;
}
