#include <stdio.h>

int main(){
    char arr[10];
        scanf("%s", arr);

        for (int i = 0; i < 10 / 2; i++) {
        char temp = arr[i];
        arr[i] = arr[10 - i - 1];
        arr[10 - i - 1] = temp;
    }
    printf("%s", arr);
    return 0;
}
