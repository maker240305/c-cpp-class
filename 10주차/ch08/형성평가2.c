#include <stdio.h>

int main(void){
    int arr[5] = {0};

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d",arr[0]+arr[2]+arr[4]);

    return 0;
}