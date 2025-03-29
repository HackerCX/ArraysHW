#include <stdio.h>

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int num = 0;
    int boool = 0;
    scanf("%d", &num);
    for(int i = 0; i < 10; i++){
        if(arr[i] == num){
            boool = 1;
            break;
        }
    }
    if(boool){     
    printf("OK");
    }else{
        printf("NO");
    }
    return 0;
}
