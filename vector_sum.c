#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};

void vectorSum(struct vector v1 , struct vector v2 , struct vector sum);

int main(){
    struct vector v1 = {10,10};
    struct vector v2 = {5,10};
    struct vector sum = {0};

    vectorSum(v1,v2,sum);

    return 0;
}

void vectorSum(struct vector v1 , struct vector v2 , struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is %d.\n",sum.x);
    printf("Sum of y is %d.\n",sum.y);
}
