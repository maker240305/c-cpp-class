#include <stdio.h>

int main(void){
    double arr[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%.1f\n", (arr[a-1] + arr[b-1]));

    return 0;
}