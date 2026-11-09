#include <stdio.h>

int main(void) {
    int a[5][4];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += a[i][j];
        }
        printf("%d %.1f\n", sum, sum / 4.0);
    }
    return 0;
}
