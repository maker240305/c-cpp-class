#include <stdio.h>

int main(void) {
    for (int row = 1; row <= 5; row++) {
        for (int col = 0; col < 5; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    printf("\n");
    for (int row = 0; row < 5; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}
