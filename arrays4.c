#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 Values for the comparing:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int mini = 0;;
    for (int i = 1; i < 10; i++) {
        if (arr[i] < arr[mini]) {
            mini = i;
        }
    }
    printf("Maximum value is: %d\n", arr[mini]);
    printf("Index of max value is %d\n",mini);
    return 0;
}
