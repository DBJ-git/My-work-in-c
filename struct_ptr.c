#include<stdio.h>
#include<string.h>

int main() {
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

    struct student s1 = {1665,9.9,"abc"};
    struct student *ptr;
    ptr = &s1;

    printf("Student roll number is %d.\n",(*ptr).roll);
    printf("Student roll number is %d.\n",ptr->roll);

    return 0;
}
