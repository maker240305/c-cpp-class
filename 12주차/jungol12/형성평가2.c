#include <stdio.h>
#include <string.h>

struct Info {
    char name[101];
    char tel[101];
    char addr[101];
};

int main() {
    struct Info p[3];
    int first_idx = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%100s %100s %100s", p[i].name, p[i].tel, p[i].addr);
        if (strcmp(p[i].name, p[first_idx].name) < 0) {
            first_idx = i;
        }
    }

    printf("name : %s\n", p[first_idx].name);
    printf("tel : %s\n", p[first_idx].tel);
    printf("addr : %s\n", p[first_idx].addr);

    return 0;
}