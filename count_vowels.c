#include<stdio.h>
#include<string.h>

void countvowels(char str[]);

int main() {
    char str[100] = "HelloWorld";

    countvowels(str);

    return 0;
}

void countvowels(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if( str[i] == 'a' ||  str[i] == 'e' ||  str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'u'){
            count ++
        }
    }
    printf("Vowels are  : %d.\n",count);
}
