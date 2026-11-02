#include <stdio.h>

int main() {
    int n;
    int sum=0;
    int i = 1;
    scanf("%d",&n);

    while (i<=n) {
        sum +=i;
        i++;
    }
    printf("%d\n",sum);

    return 0;
}