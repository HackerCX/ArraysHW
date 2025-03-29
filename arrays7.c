#include <stdio.h>

int main(){
    double arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%lf", &arr[i]);
        arr[i] = arr[i] / (sizeof(arr) / sizeof(arr[i]));
    }
    for(int i = 0; i < 10; i++){
        printf("%lf ",arr[i]);
    }
    printf("\n");
    return 0;
}
