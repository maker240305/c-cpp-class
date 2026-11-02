#include <stdio.h>

int main() {
    int x;
    int sum=0;
    scanf("%d",&x);
    for (int i=x; i<=100; i++) {
        sum += i;
    }
    printf("%d ", sum);

    return 0;
}
