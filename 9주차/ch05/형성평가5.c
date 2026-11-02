#include <stdio.h>
#include <ctype.h>


int main() {
    int x;
    int y;
    char c;
    
    while(1){
        scanf("%d",&x);
        scanf("%d",&y);

        printf("Triangle area = %.1f\n",(double)x*y/2);
        printf("Continue? ");
        scanf(" %c", &c);
        
        if(tolower(c)!='y'){
            break;
        }
    }
    return 0;
}