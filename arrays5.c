#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 Values for the comparing:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if(arr[i] < min){
            min = arr[i];
        }
    }
    int sum = max + min;
    printf("Maximum value is: %d\n", max);
    printf("Minimum value is %d\n",min);
    printf("max + min = %d\n", sum);
    return 0;
}
