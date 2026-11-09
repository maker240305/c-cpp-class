#include <stdio.h>

int main(void) {
    double w;
    double sum = 0.0;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &w);
        sum += w;
    }

    printf("%.1f\n", sum / 6);
    return 0;
}