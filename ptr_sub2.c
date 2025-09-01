#include<stdio.h>

int main(){
    int x = 50;
    int *ptr1 = &x;  // diffrence of adress.

    int y = 25;
    int *ptr2 = &y;    

    printf("%u.\n",ptr1 - ptr2);

    return 0;
}
