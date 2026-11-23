#include <stdio.h>

int main(){
    struct People {
        char name[50];
        int age;
    };
    struct People p;

    scanf("%s",p.name);
    scanf("%d",&p.age);

    printf("Your name is %s and you are %d years old.",p.name,p.age);
    return 0;
}