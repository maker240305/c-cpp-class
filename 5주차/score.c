#include <stdio.h>

int main(){
    int n;
    int cnt[11] = {0};

    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        cnt[n/10]++;
    }
    for (int i=10; i>=0; i--){
        if (cnt[i] > 0){
            printf("%d : %d person\n",i*10,cnt[i]);
        }
    }
    return 0;
}