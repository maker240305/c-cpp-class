#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int star = 0; star < row; star++) printf("*");
        printf("\n");
    }
    for (int row = n - 1; row >= 1; row--) {
        for (int star = 0; star < row; star++) printf("*");
        printf("\n");
    }
    return 0;
}
