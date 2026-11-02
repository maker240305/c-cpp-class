#include <stdio.h>

int main(void) {
    int n;
    int number;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }

    printf("%.2f\n", (double)sum / n);
    return 0;
}
