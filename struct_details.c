#include<stdio.h>
#include<string.h>

int main() {
    struct student
    int roll;
    char name[100];
    float cgpa;
};

struct student ece[100];
ece[0].roll = 1667;
ece[0].cgpa = 9.9;
strcpy(ece[0].name,"xyz");

printf("Student name is %s.\n",ece[0].name);

    return 0;
}
