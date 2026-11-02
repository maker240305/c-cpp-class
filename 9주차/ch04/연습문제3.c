#include <stdio.h>

int main(){
    int s;

    scanf("%d", &s);

    if(s>=80){
        printf("Passed.\n");
    }else{
        printf("Failed.\n");
    }

    return 0;
}