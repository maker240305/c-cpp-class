#include <stdio.h>

int main(void) {
    int a[3][3], total = 0, col[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
            sum += a[i][j];
            col[j] += a[i][j];
        }
        printf("%d\n", sum);
        total += sum;
    }
    for (int j = 0; j < 3; j++) {
        printf("%d ", col[j]);
    }
    printf("%d\n", total);
    return 0;
}
