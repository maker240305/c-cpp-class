#include <stdio.h>

int main(void){
    char arr[10];

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%c", arr[i]);
    }

    return 0;
}