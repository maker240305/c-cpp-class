#include <stdio.h>

int main() {

    int outcome;
    char grades;
    printf("결과 점수를 입력하세요(0-100): ");
    scanf("%d", &outcome);

    switch (outcome / 10) {
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
        default:
            grades = 'F';
    }
    printf("학점은: %c\n", grades);
    return 0;
}