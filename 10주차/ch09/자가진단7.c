#include <stdio.h>

int main(void) {
    int a[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
