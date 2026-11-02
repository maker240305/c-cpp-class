#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>0 && b>0 && c>0){
        printf("All Positive");
    }else{
        if(a==0 || b==0 || c==0){
            printf("Contain Zero");
        }else{
            printf("Mixed");
        }
    }

    return 0;
}