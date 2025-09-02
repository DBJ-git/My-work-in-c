#include<stdio.h>
#include<string.h>

void slice(char str[],int n,int m);

int main() {
    char str[100] = "HelloWorld";

    slice(str,3,6);

    return 0;
}

void slice(char str[],int n,int m){
     char newStr[200];
     int j = 0;
     
     for(int i = n ; i <= m ; i++){
         newStr[j] = str[i];
         j++;
     }
     newStr[j] = '\0';

     puts(newStr);
}
