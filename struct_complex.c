#include<stdio.h>
#include<string.h>

struct complex{
    int x;
    int y;

};

int main(){
    struct complex c1 = {3,8};

    struct complex *ptr = &c1

    printf("Real number is %d.\n",ptr->x);
    printf("Img number is %d.\n",ptr->y);

    return 0;
}
