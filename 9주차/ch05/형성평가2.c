#include <stdio.h>

int main() {
    int x;
    int odd=0;
    int even=0;
    
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("odd : %d\n",odd);
    printf("even : %d\n",even);

    return 0;
}