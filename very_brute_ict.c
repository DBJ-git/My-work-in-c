#include<stdio.h>
#include<string.h>

int main() {

char str1[100] = "virat";
char str2[100] = "rohit";
char str3[100] = "pujara";
char str4[100] = "Dhoni";
char str5[100] = "hardik";
char str6[100] = "bumrah";
char str7[100] = "tilak";
char str8[100] = "abhishek";
char str9[100] = "krunal";
char str10[100] = "jitesh";

char us[100];

printf("Enter ICT player name : ");
scanf("%s", &us);

if(strcmp(str1,us)){
    printf("Matched.\n");
}
else if(strcmp(str2,us)){
    printf("matched.\n");
}
else if(strcmp(str3,us)){
    printf("matched.\n");
   
}
else if(strcmp(str4,us)){
    printf("matched.\n");
}
else if(strcmp(str5,us)){
    printf("matched.\n");
}
else if(strcmp(str6,us)){
    printf("matched.\n");
}
else if(strcmp(str7,us)){
    printf("matched.\n");
}
else if(strcmp(str8,us)){
    printf("matched.\n");
}
else if(strcmp(str9,us)){
    printf("matched.\n");
}
else if(strcmp(str10,us)){
    printf("matched.\n");
}
else{
    printf("Unmatched.\n");
}


return 0;
}
