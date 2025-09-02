#include<stdio.h>
#include<string.h>

int main() {
    struct student{
        int roll;
        char name[100];
        float cgpa;
    };

    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.9;
    strcpy(s1.name,"Divy");

    printf("Student name is %s , student roll no is %d , student cgpa is %f.\n",s1.name,s1.roll,s1.cgpa);
    
    return 0;
}
