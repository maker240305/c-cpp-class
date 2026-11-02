#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int space = i; space < n; space++) printf(" ");
        for (int star = 0; star < i; star++) printf("*");
        printf("\n");
    }
    return 0;
}
