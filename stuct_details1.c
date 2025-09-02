#include<stdio.h>
#include<string.h>

int main() {
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

    struct student s1 = {1665,9.9,"abc"};

    printf("Student name is %s.\n",s1.name);

    return 0;
}
