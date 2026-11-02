#include <stdio.h>

int main(void) {
    int n;
    char letter = 'A';
    int number = 0;
    scanf("%d", &n);

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (col < n - row) printf("%c", letter++);
            else printf("%d", number++);
            if (col + 1 < n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
