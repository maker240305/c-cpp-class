#include <stdio.h>

int main(void) {
    int a[10][10] = {0}, n;
    scanf("%d", &n);
    a[0][0] = 1;
    for (int i = 1; i < n; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
