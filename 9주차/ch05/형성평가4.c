#include <stdio.h>

int main() {
    int cnt=0;
    int x;
    
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x%3!=0 && x%5!=0){
            cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}