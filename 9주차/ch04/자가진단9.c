#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("%d", min);

    return 0;
}