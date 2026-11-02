#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if(a>10){
        printf("%d\n",a);
        printf("Larger than 10.");
    }else{
        printf("%d",a);
    }
}