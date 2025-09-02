#include<stdio.h>

void yesorno(char str[]);

int main() {
    char str[100];

    printf("Enter a word :");
    fgets(str,100,stdin);

    yesorno(str);

    return 0;
}
 void yesorno(char str[]){
     int found = 0;

     for(int i = 0 ; str[i] != '\0' ; i++){
         if(str[i] == 'a' || str[i] == 'A') {
             found = 1;
             break;
         }
     }

         if(found)    {
             printf("Yes 'a' or 'A' is present in string.\n");
         }
         else{
             printf("NO 'a' or 'A' is not present in string.\n");
         }
 }
