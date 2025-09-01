#include<stdio.h>

void oddCount(int arr[],int n);

int main() {
    int arr[] = {1,2,3,4,5,6};

    oddCount(arr,6);

    return 0;
}

void oddCount(int arr[],int n){
    int count = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 != 0){
            count ++;
        }
    }
    printf("%d\n",count);
}

