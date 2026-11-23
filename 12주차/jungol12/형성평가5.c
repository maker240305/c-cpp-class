#include <stdio.h>

struct Student {
    char name[21]; // 최대 20자 + 널 문자('\0')
    int score[3];
    int total;
};

int main() {
    int n;
    struct Student arr[10];
    struct Student temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%20s %d %d %d", arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
        arr[i].total = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].total < arr[j + 1].total) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }

    return 0;
}