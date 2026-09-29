#include <stdio.h>

int main(){
    int a,b,c;
    int n;
    int cnt[10] = {0};
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    n = a*b*c;
    
    while(n > 0){
        cnt[n%10]++;
        n /= 10;
    }
    for(int i=0; i<10;i++){
        printf("%d\n",cnt[i]);
    }

    return 0;
}