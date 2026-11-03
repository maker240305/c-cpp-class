#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch = 'M'; // 검사할 문자
    printf("문자: %c\n", ch);

    // isalpha: 알파벳 문자인지 검사
    printf("알파벳 여부: %s\n", isalpha(ch) ? "예" : "아니요");

    // isupper: 대문자인지 검사
    printf("대문자 여부: %s\n", isupper(ch) ? "예" : "아니요");

    // islower: 소문자인지 검사
    printf("소문자 여부: %s\n", islower(ch) ? "예" : "아니요");

    // isdigit: 숫자 문자인지 검사
    printf("숫자 여부: %s\n", isdigit(ch) ? "예" : "아니요");

    // isalnum: 알파벳 또는 숫자인지 검사
    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch) ? "예" : "아니요");

    // isxdigit: 16진수 숫자(0~9, A~F, a~f)인지 검사
    printf("16진수 숫자 여부: %s\n", isxdigit(ch) ? "예" : "아니요");

    // ispunct: 구두점 문자인지 검사
    printf("구두점 문자 여부: %s\n", ispunct(ch) ? "예" : "아니요");

    // isprint: 화면에 출력할 수 있는 문자인지 검사
    printf("인쇄 가능 문자 여부: %s\n", isprint(ch) ? "예" : "아니요");

    // iscntrl: 제어 문자인지 검사
    printf("제어 문자 여부: %s\n", iscntrl(ch) ? "예" : "아니요");

    // isascii: ASCII 문자 범위(0~127)에 속하는지 검사
    printf("아스키 문자 여부: %s\n", isascii(ch) ? "예" : "아니요");

    return 0;
}