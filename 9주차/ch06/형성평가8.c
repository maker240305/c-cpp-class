#include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%d", i * j);
            if (j < cols) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
