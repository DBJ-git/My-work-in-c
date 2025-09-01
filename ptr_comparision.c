#include<stdio.h>

int main(){
    int age = 22;
    int *ptr1 = &age;

    int _age = 23;
    int *ptr2 = &_age;

    if(*ptr1 == *ptr2){
        printf(" same value.\n");
    }
    else{
         printf(" not same value.\n");
    }

    return 0;
}
