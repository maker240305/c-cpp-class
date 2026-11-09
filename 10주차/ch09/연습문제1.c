#include <stdio.h>

int main(void){
    int arr[10] = {0};
    int n =0;
    while(1){
        scanf("%d", &n);
        if(n>=1 && n<=10){
            arr[n-1]++;
        }
        else{
            break;
        }
    }
    for(int i=0; i<10; i++){
        if(arr[i]>0){
            printf("%d : %d\n", i+1, arr[i]);
        }
    }
}