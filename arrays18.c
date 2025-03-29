#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int flag = 1;
    for (int i = 1; i < 10; i++) {
        if (arr[i] > arr[i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
