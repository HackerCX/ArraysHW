#include <stdio.h>

int main(){
    char arr[10];
    for(int i = 0; i < 10; i++){
        scanf(" %c", &arr[i]);
        if(arr[i] > 'a' && arr[i] < 'z'){
            arr[i] = arr[i] ^ 32;
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
