#include <stdio.h>

int main(){
    int a;

    while(1){
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number: ");
        scanf("%d",&a);
        if(a==4){
            printf("You selected Finish.\n\n");
            break;
        }else if(a==1){
            printf("You selected Input.\n\n");
        }else if(a==2){
            printf("You selected Output.\n\n");
        }else if(a==3){
            printf("You selected Delete.\n\n");
        }else{
            printf("Wrong input.\n\n");
        }
    }

    return 0;
}