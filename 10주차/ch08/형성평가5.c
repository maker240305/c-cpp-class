#include <stdio.h>

int main(void){
    int arr[100];
    int count = 0;
    while (count < 100) {
        scanf("%d", &arr[count]);
        if (arr[count] == 0) {
            break;
        }
        count++;
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d", max+ min);
    return 0;
}