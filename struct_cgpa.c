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

    struct student s2;
    s2.roll = 1689;
    s2.cgpa = 9.8;
    strcpy(s2.name,"xyz");

    struct student s3;
    s3.roll = 1167;
    s3.cgpa = 9.1;
    strcpy(s3.name,"abc");

    printf("Student name is %s , student roll no is %d , student cgpa is %f.\n",s1.name,s1.roll,s1.cgpa);
    printf("Student name is %s , student roll no is %d , student cgpa is %f.\n",s2.name,s2.roll,s2.cgpa);
    printf("Student name is %s , student roll no is %d , student cgpa is %f.\n",s3.name,s3.roll,s3.cgpa);


    return 0;

}
