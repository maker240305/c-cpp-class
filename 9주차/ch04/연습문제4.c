#include <stdio.h>

int main(){
    int s;
    int grades;

    scanf("%d", &s);

    switch (s / 10) {
        case 10:
        case 9:
            grades = 'A';
            break;
        case 8:
            grades = 'B';
            break;
        case 7:
            grades = 'C';
            break;
        case 6:
            grades = 'D';
            break;
        default:
            grades = 'F';
    }
    printf("%c\n", grades);
    return 0;
}