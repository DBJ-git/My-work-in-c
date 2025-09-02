#include<stdio.h>
#include<string.h>

int main() {
    typedef struct address{
        int houseno;
        int block;
        char city[100];
        char state[100];
    }add;

    add p2;
    p2.houseno = 22;
    p2.block = 2;
    strcpy(p2.city,"Gandhinager");
    strcpy(p2.state,"Gujarat");

    add p3;
    p3.houseno = 32;
    p3.block = 3;
    strcpy(p3.city,"Gandhinager");
    strcpy(p3.state,"Gujarat");

    add p4;
    p4.houseno = 42;
    p4.block = 4;
    strcpy(p4.city,"Gandhinager");
    strcpy(p4.state,"Gujarat");

    add p1;
    p1.houseno = 12;
    p1.block = 1;
    strcpy(p1.city,"Gandhinager");
    strcpy(p1.state,"Gujarat");

    add p5;
    p5.houseno = 52;
    p5.block = 4;
    strcpy(p5.city,"Gandhinager");
    strcpy(p5.state,"Gujarat");

    printf("%d\n",p1.block);

    return 0;
}
