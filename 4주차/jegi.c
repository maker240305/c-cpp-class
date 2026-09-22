#include <stdio.h>

void prtNum(int n){
    if(n==0){
        return;
    }
    prtNum(n-1);         //이거
    printf("%d\n",n);    //이거 를 순서를 바꾸면 큰수부터
    
}

int main(){
    int num;
    printf("1부터200사이의 숫자를 입력 : ");
    scanf("%d",&num);
    prtNum(num);
    return 0;
}