#include <stdio.h>

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int arr2[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr2[i]);
    }
    int flag = 1;
    for(int i = 0; i < 10; i++){
    if(arr[i] != arr2[i]){
        flag = 0;
        break;
    }
    }
    if(flag){
        printf("Zangvacneri arjeqnery nuynn en");
    }else{
        printf("Zangvacneri arjeqnery chen hamynknum");
    }
    return 0;
}
