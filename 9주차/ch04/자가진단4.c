#include <stdio.h>

int main(){
    int s;

    scanf("%d", &s);

    switch (s / 10) {
        case 10:
        case 9:
            printf("Excellent");
            break;
        case 8:
            printf("Good");
            break;
        case 7:
            printf("Pass");
            break;
        default:
            printf("Fail");
    }

    return 0;
}