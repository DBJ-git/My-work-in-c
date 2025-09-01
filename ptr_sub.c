#include<stdio.h>

int main(){
    int x = 50;
    int *ptr1 = &x;  // diffrence of value.

    int y = 25;
    int *ptr2 = &y;    

    printf("%d.\n",*ptr1 - *ptr2);

    return 0;
}
