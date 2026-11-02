#include <stdio.h>

int main() {
    int a;
    while (1) {
        scanf("%d",&a);
        if(a<0 || a>100){
            break;
        }else if(a>=80){
            printf("Pass\n");
        }else{
            printf("Fail\n");
        }
    }

    return 0;
}