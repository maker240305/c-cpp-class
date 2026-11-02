#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < i; j++) printf("⁕");
        printf("\n");
    }
    for (int i = 3; i >= 1; i--) {
        for (int j = 0; j < i; j++) printf("⁕");
        printf("\n");
    }
    return 0;
}
