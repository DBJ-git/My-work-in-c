#include<stdio.h>
#include<string.h>

int main() {
    typedef struct computer engineering student{
        int roll;
        float cgpa;
        char name[100];
    }coe;

    coe s1;
    s1.roll = 1999;
    s1.cgpa = 9.9;
    strcpy(s1.name,"xyz");

    printf('%d\n',s1.roll);

    return 0;
}
