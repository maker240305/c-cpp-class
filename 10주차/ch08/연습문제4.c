#include <stdio.h>

int main(void){
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    while(1){
        int m;
        scanf("%d", &m);
        if (m < 1 || m > 12) {
            break;
        }
        printf("%d\n",arr[m - 1]);
    }
}