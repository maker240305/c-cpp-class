#include <stdio.h>

int main(void) {
    for (int dan = 2; dan <= 4; dan++) {
        for (int number = 1; number <= 5; number++) {
            printf("%d * %d = %2d", dan, number, dan * number);
            if (number < 5) printf("   ");
        }
        printf("\n");
    }
    return 0;
}
