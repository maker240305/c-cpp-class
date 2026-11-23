#include <stdio.h>

struct People {
    char name[31];
    int age;
};

int main() {
    struct People one;
    struct People two;
    struct People tre;

    scanf("%30s %d", one.name, &one.age);
    scanf("%30s %d", two.name, &two.age);
    scanf("%30s %d", tre.name, &tre.age);

    printf("Name : %s\nAge : %d\n", one.name, one.age);
    printf("Name : %s\nAge : %d\n", two.name, two.age);
    printf("Name : %s\nAge : %d\n", tre.name, tre.age);
    return 0;
}