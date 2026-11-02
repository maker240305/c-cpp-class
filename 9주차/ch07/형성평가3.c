#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int row = 0; row < n; row++) {
        for (int space = row + 1; space < n; space++) printf(" ");
        for (int star = 0; star < 2 * row + 1; star++) printf("*");
        printf("\n");
    }
    return 0;
}
