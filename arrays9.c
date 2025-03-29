#include <stdio.h>

int main(){
    int arr[10];
    int a = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        arr[i] = arr[10 - i];
        arr[10 - i - 1] = a;
     }
    for(int i = 0; i < 10; i++){
        printf("%d   ",arr[i]);
    }
    return 0;
}
