#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int step = (a <= b) ? 1 : -1;

    for (int number = 1; number <= 9; number++) {
        for (int dan = a; ; dan += step) {
            printf("%d * %d = %2d", dan, number, dan * number);
            if (dan != b) printf("   ");
            else break;
        }
        printf("\n");
    }
    return 0;
}
