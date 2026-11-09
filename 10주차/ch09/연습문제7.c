#include <stdio.h>

int main(void) {
    int a[5][5] = {0};
    a[0][0] = 1;
    for (int i = 1; i < 5; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
