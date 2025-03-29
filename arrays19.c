#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int unique = 0;
    for (int i = 0; i < 10; i++) {
        unique ^= arr[i];
    }
    
    printf("%d\n", unique);
    
    return 0;
}
