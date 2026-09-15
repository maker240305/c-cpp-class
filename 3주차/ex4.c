#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int temp = b;

    while (temp > 0) {   //temp != 0
        printf("%d\n", a*(temp%10)); //현재 마지막 자리 숫자
        temp /= 10; //마지막 자리 숫자 제거
    }
    printf("%d\n", a*b);

    return 0;
}