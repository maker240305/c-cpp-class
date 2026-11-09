#include <stdio.h>

int main(void) {
    int a[1000];
    a[0] = 100;
    scanf("%d", &a[1]);
    printf("%d %d ", a[0], a[1]);
    for (int i = 2; i < 1000; i++) {
        a[i] = a[i - 2] - a[i - 1];
        printf("%d ", a[i]);
        if (a[i] < 0) {
            break;
        }
    }
    return 0;
}
