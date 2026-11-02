#include <stdio.h>

int main(void) {
    int n;
    int score;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        sum += score;
    }

    double average = (double)sum / n;
    printf("avg : %.1f\n", average);
    printf("%s\n", average >= 80 ? "pass" : "fail");
    return 0;
}
