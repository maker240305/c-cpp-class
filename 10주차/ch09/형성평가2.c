#include <stdio.h>

int main(void) {
    int count[11] = {0}, score;
    while (1) {
        scanf("%d", &score);
        if (score == 0) {
            break;
        }
        count[score / 10]++;
    }
    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }
    return 0;
}
