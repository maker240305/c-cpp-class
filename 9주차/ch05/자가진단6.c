#include <stdio.h>

int main(){
    int a;

    while(1){
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
        scanf("%d",&a);
        if(a==1){
            printf("Seoul\n");
        }else if(a==2){
            printf("Washington\n");
        }else if(a==3){
            printf("Tokyo\n");
        }else if(a==4){
            printf("Beijing\n");
        }else{
            printf("none");
            break;
        }
    }

    return 0;
}