#include <stdio.h>

int main() {
    int num=1;
    int sum=0;
    while (num <= 10) {
        sum +=num;
        num++;
    }
    printf("sum = %d\n",sum);
    printf("num = %d\n",num);

    return 0;
}