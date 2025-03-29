#include <stdio.h>

int main() {
    int arr[10];
    int target, i, index = -1;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    for (i = 0; i < 10; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    
    printf("%d\n", index);
    
    return 0;
}
