#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main() {
    char password[100];

    printf("Enter a password : ");
    scanf("%s",password);

   salting(password);

return 0;
}

void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];
    int len = strlen(password);
    int mid = len / 2 ;

    strncpy(newPass,password,mid);   //strn
    
    newPass[mid] = '\0';

    strcat(newPass,salt);

    strcat(newPass,password + mid);

    puts(newPass);

}
