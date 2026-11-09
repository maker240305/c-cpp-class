#include <stdio.h>

int main(void){
    int arr[100];
    int count = 0;
    while (count < 100) {
        scanf("%d", &arr[count]);
        if (arr[count] == 0) {
            break;
        }
        count++;
    }
    int m5=0;
    int sum=0;
    for (int i = 0; i < count; i++) {
        if (arr[i]%5 ==0) {
            m5++;
            sum += arr[i];
        }
    }
    printf("Multiples of 5 : %d\n", m5);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (float)sum/m5);
    return 0;
}