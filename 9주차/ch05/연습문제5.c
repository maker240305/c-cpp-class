#include <stdio.h>

int main() {
    int a;
    int min, max;
    int first = 1; //on 입력 첫번째 값인걸 확인해주는 값

    while (1) {
        scanf("%d", &a);

        if (a == 0) {
            break;
        }

        if (a >= 1 && a <= 100) {
            if (first == 1) { //만약 입력 첫번째라면
                min = a;
                max = a;
                first = 0; //off
            }

            if (a < min) {
                min = a;
            }

            if (a > max) {
                max = a;
            }
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}