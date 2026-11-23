#include <stdio.h>

struct People {
    char name[31];
    int key;
};

int main() {
    struct People p[5];
    int min = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%30s %d", p[i].name, &p[i].key);
        if (p[i].key < p[min].key) {
            min = i;
        }
    }

    printf("%s %d\n", p[min].name, p[min].key);

    return 0;
}