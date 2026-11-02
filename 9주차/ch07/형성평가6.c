#include <stdio.h>

int main(void) {
    int n;
    int number = 1;
    scanf("%d", &n);
    for (int row = 0; row < n; row++) {
        for (int space = 0; space < 2 * row; space++) printf(" ");
        for (int col = 0; col < n - row; col++) {
            printf("%d", number++);
            if (col + 1 < n - row) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
