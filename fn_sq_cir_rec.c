#include<stdio.h>    // 48

void square(int side);
void rectangle(int a, int b);
void circle(float radius);

int main() {
    int side;
    int a; 
    int b;
    float radius;

    printf("Enter a value of side :");
    scanf("%d", &side);

    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);

    printf("Enter a value of radius :");
    scanf("%f", &radius);

    square(side);
    rectangle(a,b);
    circle(radius);

return 0;

}

void square(int side){
    printf("Area of square is %d.\n",side * side);
}

void rectangle(int a, int b){
    printf("Area of rectangle is %d.\n",a * b);
}

void circle(float radius){
    printf("Area of circle is %f.\n",3.14 * radius * radius);
}
