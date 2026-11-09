#include <stdio.h>

int main(void) {
    int count[10] = {0}, n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        count[n / 10]++;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }
    return 0;
}
