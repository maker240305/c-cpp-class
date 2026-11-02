#include <stdio.h>

int main(void) {
    char letter = 'a';
    int number = 1;
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 5; col++) {
            if (col < row) printf("%c", letter++);
            else printf("%d", number++);
            if (col < 4) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
