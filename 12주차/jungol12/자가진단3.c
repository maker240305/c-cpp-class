#include <stdio.h>

struct People {
    char name[31];
    int hei;
};

int main() {
    struct People one;
    struct People two;
    struct People tre;

    scanf("%30s %d", one.name, &one.hei);
    scanf("%30s %d", two.name, &two.hei);
    scanf("%30s %d", tre.name, &tre.hei);

    printf("%s : %dcm\n", one.name, one.hei);
    printf("%s : %dcm\n", two.name, two.hei);
    printf("%s : %dcm\n", tre.name, tre.hei);
    return 0;
}