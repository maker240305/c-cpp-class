#include <stdio.h>

int main(){
    int h;
    int w;
    int r;

    scanf("%d", &h);
    scanf("%d", &w);
    r = w + 100 - h;

    if(r>0){
        printf("%d\n",r);
        printf("Obesity\n");
        printf("Need control\n");
    }else{
        printf("%d\n",r);
    }

    return 0;
}