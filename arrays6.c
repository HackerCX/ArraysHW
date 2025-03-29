#include <stdio.h>

int main(){
    int arr[10];
    int sum = 0;
    int prod = 1;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        prod*= arr[i];
    }
    printf("Product = %d Sum = %d",prod,sum);
    return 0;
}
