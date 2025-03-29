#include <stdio.h>

int main() {
    int n;
    
    printf("Enter N: ");
    scanf("%d", &n);
    
    int arr[n - 1];
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int expectedSum = n * (n + 1) / 2;
    int missingNumber = expectedSum - sum;
    
    printf("Missing number: %d\n", missingNumber);
    
    return 0;
}

