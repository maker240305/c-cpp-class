#include <stdio.h>

int main(void) {
    for (int number = 1; number <= 9; number++) {
        for (int dan = 2; dan <= 4; dan++) {
            printf("%d * %d = %2d", dan, number, dan * number);
            if (dan < 4) printf("   ");
        }
        printf("\n");
    }
    return 0;
}
