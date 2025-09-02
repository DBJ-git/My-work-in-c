#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main() {
    struct student s1 = {1666,9.9,"cat"};

    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("Students information : \n");
    printf("Student roll number is %d.\n",s1.roll);
    printf("Student cgpa is %f.\n",s1.cgpa);
    printf("Student name is %s.\n",s1.name);
}
