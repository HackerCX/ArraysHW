#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 Values for the comparing:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int maxi = 0;;
    for (int i = 1; i < 10; i++) {
        if (arr[i] > arr[maxi]) {
            maxi = i;
        }
    }
    printf("Maximum value is: %d\n", arr[maxi]);
    printf("Index of max value is %d\n",maxi);
    return 0;
}
