#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d", n * i);
        if (i < 10) printf(" ");
    }
    printf("\n");
    return 0;
}
