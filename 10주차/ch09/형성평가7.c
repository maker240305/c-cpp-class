#include <stdio.h>

int main(void) {
    int a[4][2], total = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            total += a[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", (a[i][0] + a[i][1]) / 2);
    }
    printf("\n");
    for (int j = 0; j < 2; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += a[i][j];
        }
        printf("%d ", sum / 4);
    }
    printf("\n%d\n", total / 8);
    return 0;
}
