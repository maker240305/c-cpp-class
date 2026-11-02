#include <stdio.h>

int main(void) {
    int number;
    int multiple3 = 0;
    int multiple5 = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &number);
        if (number % 3 == 0) multiple3++;
        if (number % 5 == 0) multiple5++;
    }

    printf("Multiples of 3 : %d\n", multiple3);
    printf("Multiples of 5 : %d\n", multiple5);
    return 0;
}
