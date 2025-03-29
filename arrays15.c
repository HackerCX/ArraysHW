#include <stdio.h>

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0, right = size - 1;

    while (left < right) {
        while (left < right && arr[left] % 2 == 0) {
            left++;
        }
        while (left < right && arr[right] % 2 == 1) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d   ",arr[i]);  
    }
    return 0;
}
