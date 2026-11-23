#include <stdio.h>

struct Student {
    char name[21];   
    char school[21]; 
    int grade;
};

int main() {
    struct Student s;

    scanf("%20s %20s %d", s.name, s.school, &s.grade);

    printf("Name : %s\n", s.name);
    printf("School : %s\n", s.school);
    printf("Grade : %d\n", s.grade);

    return 0;
}