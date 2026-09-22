#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int answer;
    int num;
    int count=0;

    srand(time(NULL));

    answer = rand() % 100 + 1;
    printf("1부터 100사이에 숫자를 맞춰보세요 : ");

    while(1){
        scanf("%d", &num);
        count += 1;
        if(answer==num){
            printf("정답입니다! %d번째 시도입니다",count);
            break;
        }else{
            if(num>answer){
                printf("더 작은 수 입니다 : ");
            }else{
                printf("더 큰 수 입니다 : ");
            }        
        }
    }
}