#include <stdio.h>

struct Person {
    char name[21];
    int age;
};

int main() {
    struct Person me = {"Yejun", 12};
    struct Person frnd;

    scanf("%20s %d", frnd.name, &frnd.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", frnd.name, frnd.age);

    return 0;
}