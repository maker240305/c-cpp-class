#include <stdio.h>

int main(void){
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (int i = 25; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    return 0;
}