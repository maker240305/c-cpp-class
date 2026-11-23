#include <stdio.h>

struct School {
    char name[31];
    int grade;
};

int main() {
    struct School me = {"Jejuelementary", 6};
    struct School news;

    scanf("%30s %d", news.name, &news.grade);

    printf("%d grade in %s School\n", me.grade, me.name);
    printf("%d grade in %s School\n", news.grade, news.name);

    return 0;
}