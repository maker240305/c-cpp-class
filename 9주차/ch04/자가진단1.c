#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if(a<0){
        printf("%d\n",a);
        printf("minus\n");
    }else{
        printf("%d\n",a);
    }
}