#include <stdio.h>

int main() {
    int a;
    int sum=0;
    int cnt=0;
    while (1) {
        scanf("%d",&a);
        if(a==0){
            printf("cnt = %d\nsum = %d\navg = %.2f", cnt, sum, (double)sum / cnt);
            break;
        }else{
            cnt++;
            sum += a;
        }
    }

    return 0;
}