#include<stdio.h>      // 43

void Namaste();
void Bonjour();

int main() {
    char ch;
    
    printf("Enter I if you are indian or F for French :");
    scanf (" %c", &ch);

    if(ch == 'I' || ch == 'i'){
        Namaste();
    }
    else {
        Bonjour();
    }

    return 0;
}

void Namaste() {
    printf("Namaste!\n");
}

void Bonjour() {
    printf("Bonjour!\n");
}
