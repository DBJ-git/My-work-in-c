#include<stdio.h>           // 15

int main() {
    int age;
    
    printf("Enter your age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are adult.\n");
    } 
    else if(age < 18 && age >= 12 ) {
        printf("You are teenager.\n");
    }   
    else{
        printf("You are child.\n");
    }

    printf("Thank you \n");
    
    return 0;
}
