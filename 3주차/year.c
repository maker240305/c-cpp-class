#include <stdio.h>

int main() {
    int yr;
    scanf("%d", &yr);

    if ((yr%4 == 0 && yr%100 != 0) || yr%400 == 0) {
        printf("%d년은 윤년 입니다.\n", yr);
    } else {
        printf("%d년은 윤년이 아닙니다.\n", yr);
    }

    return 0;
}