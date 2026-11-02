#include <stdio.h>

int main() {
    int s=0;
    int cnt=0;
    int x;
    
    while(1){
        scanf("%d",&x);
        if(x<0 || x>100){
            break;
        }
        s += x;
        cnt++;
    }
    printf("sum : %d\n",s);
    printf("avg : %.1f\n",(double)s/cnt);

    return 0;
}