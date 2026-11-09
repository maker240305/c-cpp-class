#include <stdio.h>

int main(void){
    int arr[10] ={0};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }   
    }
    printf("%d\n", min);
    return 0;   
}