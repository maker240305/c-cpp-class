#include <stdio.h>

struct People {
    int h;
    double w;
};

struct People makeStudent(struct People dad, struct People mom) {
    struct People kid;
    kid.h = (dad.h + mom.h) / 2 + 5;
    kid.w = (dad.w + mom.w) / 2.0 - 4.5;
    return kid;
}

int main() {
    struct People dad, mom, kid;

    scanf("%d %lf", &dad.h, &dad.w);
    scanf("%d %lf", &mom.h, &mom.w);

    kid = makeStudent(dad, mom);

    printf("height : %dcm\n", kid.h);
    printf("weight : %.1fkg\n", kid.w);

    return 0;
}