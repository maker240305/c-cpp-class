#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < i; space++) printf(" ");
        for (int star = n - i; star > 0; star--) printf("*");
        printf("\n");
    }
    return 0;
}
