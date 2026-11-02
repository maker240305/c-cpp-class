#include <stdio.h>

int main(void) {
    int n;
    int number = 1;
    char letter = 'A';
    scanf("%d", &n);

    for (int row = 0; row < n; row++) {
        int numberCount = n - row;
        for (int col = 0; col < n + 1; col++) {
            if (col < numberCount) printf("%d", number++);
            else printf("%c", letter++);
            if (col < n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
