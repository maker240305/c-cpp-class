#include <stdio.h>

int main() {
    int a;
    int small = 0;
    int large = 0;

    while (1) {
        scanf("%d", &a);
        
        if (a < 50) {
            small++;
        } else {
            large++;
        }
        if (a >= 100) {
            break;
        }

        
    }

    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}