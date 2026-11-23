#include <stdio.h>

struct Person {
    char name[21];
    int h;
    float w;
};

int main() {
    struct Person p[5];
    struct Person temp;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d %f", p[i].name, &p[i].h, &p[i].w);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (p[j].h > p[j + 1].h) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", p[i].name, p[i].h, p[i].w);
    }

    return 0;
}