#include<stdio.h>

int main() {
    int marks = [2][3];

    marks[0][0] = 99;
    marks[0][1] = 98;
    marks[0][2] = 97;

    marks[1][0] = 99;
    marks[1][1] = 98;
    marks[1][2] = 97;

    printf("%d\n",marks[1][1]);

  return 0;
}
