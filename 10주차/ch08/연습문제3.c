#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;

    while (count < 100) {
        scanf("%d", &arr[count]);
        if (arr[count] == 0) {
            break;
        }
        count++;
    }

    for (int i = 1; i < count; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}