#include <stdio.h>
#include <stdarg.h> // 가변 매개변수 사용 시 선언하는 헤더 파일

int sum(int num, ...){
    va_list args;
    int total=0;

    va_start(args, num); //args 초기화, num 이후 인자부터 시작

    for(int i=0; i<num; i++){
        total += va_arg(args,int);  //다음 int 인자 가져오기
    }
    va_end(args);   // 가변 매개변수 목록 정리
    return total;
}

int main(){
    printf("매개변수 3, 2+3+4=%d\n", sum(3, 2,3,4));
    printf("매개변수 2, 5+6=%d\n", sum(2, 5,6));
    printf("매개변수 10, 1+2+3+4+5+6+7+8+9+10=%d\n", sum(10, 1,2,3,4,5,6,7,8,9,10));

    return 0;
}