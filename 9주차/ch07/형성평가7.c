#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int col = 0; col < row; col++) {
            printf("#");
            if (col + 1 < row) printf(" ");
        }
        printf("\n");
    }
    for (int row = 1; row < n; row++) {
        for (int space = 0; space < 2 * row; space++) printf(" ");
        for (int col = 0; col < n - row; col++) {
            printf("#");
            if (col + 1 < n - row) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
