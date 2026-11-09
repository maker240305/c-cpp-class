#include <stdio.h>

int main(void) {
    int a[4][3], total = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        printf("%d\n", sum);
        total += sum;
    }
    printf("%d\n", total);
    return 0;
}
