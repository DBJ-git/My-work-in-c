#include<stdio.h>

void pointNumber(int arr[] , int n);

int main() {
    int n;

    printf("Enter a number :");
    scanf("%d", &n);

    pointNumber(arr,n);

    return 0;
}

void pointNumber(int arr[] , int n);
     for(int i = 0 ; i <= n ; i++){
         printf("%d\n",arr[i]);
     }
