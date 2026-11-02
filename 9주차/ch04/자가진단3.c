#include <stdio.h>

int main(){
    int o;

    scanf("%d", &o);

    if(o>=20){
        printf("adult\n");
    }else{
        printf("%d years later\n",20-o);
    }

    return 0;
}