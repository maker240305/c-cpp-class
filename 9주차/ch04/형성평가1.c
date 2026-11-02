#include <stdio.h>

int main(){
    int a;
    int b;
    int r;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        r = a-b;
    }else{
        r = b-a;
    }
    printf("%d", r);
}