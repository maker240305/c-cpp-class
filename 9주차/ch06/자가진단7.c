#include <stdio.h>

int main(void) {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            printf("%d ", row + col + 2);
        }
        printf("\n");
    }
    return 0;
}
