#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main(void){
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];
    char ch = 'p';
    int n = 3;

    // strlen: 문자열의 길이를 계산
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // strcpy: str1을 str3에 복사
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // strncpy: str2의 앞 n개 문자를 str3에 복사
    strncpy(str3, str2, n);
    str3[n] = '\0';   // 널 문자 추가
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    // strcmp: 두 문자열 전체를 비교
    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    // strncmp: 두 문자열의 앞 n개 문자만 비교
    printf("str1과 str2의 첫 %d 문자 비교: %d\n", n, strncmp(str1, str2, n));

    // strcat: str2를 str1의 뒤에 연결
    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    // strncat: str1의 앞 n개 문자를 str3의 뒤에 연결
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결: %s\n", n, str3);

    // strchr: str1에서 ch('p')의 첫 번째 출현 위치를 찾기
    char *ptr_ch = strchr(str1, ch);
    printf("str1에서 '%c'의 첫 번째 출현: %s\n", ch, ptr_ch);

    // strstr: str1에서 str2의 첫 번째 출현 위치를 찾기
    char *ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음");

    return 0;
}