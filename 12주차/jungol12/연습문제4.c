#include <stdio.h>

struct People {
    char name[31];
    int scr;
};

int main() {
    struct People p[5];
    int max_idx = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%30s %d", p[i].name, &p[i].scr);
        if (p[i].scr > p[max_idx].scr) {
            max_idx = i;
        }
    }

    printf("%s %d\n", p[max_idx].name, p[max_idx].scr);

    return 0;
}