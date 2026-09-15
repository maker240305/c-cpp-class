#include <stdio.h>

int main() {
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    printf("%s", (a%2 == 0) ? "Even\n" : "Odd\n");   //조건 연산자

    if (a%2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}