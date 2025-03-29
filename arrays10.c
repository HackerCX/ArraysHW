#include <stdio.h>

int main(){
    int arr[10];
    int count = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        count++;
    }
    double avg = sum / count;
    printf("Avg = %lf \n",avg);
    return 0;
}
