#include <stdio.h>

int main(void) {
    int n;
    char letter = 'A';
    scanf("%d", &n);
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row; col++) {
            printf("%c", letter++);
        }
        printf("\n");
    }
    return 0;
}
