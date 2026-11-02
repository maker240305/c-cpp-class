#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int space = 0; space < 2 * (n - row); space++) printf(" ");
        for (int number = 1; number <= row; number++) {
            printf("%d", number);
            if (number < row) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
