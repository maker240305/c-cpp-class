#include <stdio.h>

int main(){
    int a;
    int cnt=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a);
        if(a%2==0){
            cnt++;
        }
    }
    printf("Even numbers = %d\n",cnt);

}