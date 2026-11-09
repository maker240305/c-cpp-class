#include <stdio.h>

int main(void){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf(" %d", &arr[i]);
    }
    int sum=0;
    int sum2=0;
    for (int i = 1; i < 10; i+=2) {
        sum += arr[i];
    }
    for (int i = 0; i < 10; i+=2) {
        sum2 += arr[i];
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum2/5);
    return 0;

}