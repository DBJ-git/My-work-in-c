#include<stdio.h>
#include<string.h>

int main() {
    char first[100] = "Divy";
    char last[100] = "Joshi";

   int result =  strcmp(first,last);

   if(result == 0){
       printf("Both strings are equal.\n");
   }
   else if(result < 0){
       printf("%s comes before %s alpabetically.\n",first,last);
   }
   else{
       printf("%s comes after %s alpabetically.\n",first,last);
   }

    return 0;
}
