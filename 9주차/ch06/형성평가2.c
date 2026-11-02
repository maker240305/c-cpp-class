#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        printf("%d", i);
        if (i < b) printf(" ");
    }
    printf("\n");
    return 0;
}
