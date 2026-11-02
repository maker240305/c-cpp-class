#include <stdio.h>

int main(void) {
    for (int row = 0; row < 5; row++) {
        for (int space = 0; space < 4 - row; space++) printf(" ");
        for (int star = 0; star < 2 * row + 1; star++) printf("*");
        printf("\n");
    }
    return 0;
}
