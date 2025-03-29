#include <stdio.h>

int main(){
    int arr[10];
    int prod = 1;
    int arr2[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < 10; i++){
    prod = arr[i] * arr2[i];
    printf("%d * %d = %d",arr2[i],arr[i],prod);
    }
    return 0;
}
