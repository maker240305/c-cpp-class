#include <stdio.h>

int main(void) {
    int number;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) even++;
        else odd++;
    }

    printf("even : %d\nodd : %d\n", even, odd);
    return 0;
}
