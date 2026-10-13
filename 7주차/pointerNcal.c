//포인터 증감 연산
#include <stdio.h>

int main() {
    int i = 10;
    int *p;
    p = &i;

    printf("%p\n" ,p);
    printf("%d\n" ,(*p)++);
    printf("%d\n" ,(*p)+1);
    printf("%d\n" ,*p+=1);
    printf("%d\n" ,(*p)+=1);
    printf("%d\n" ,*p=*p+1);
    printf("%d\n" ,++*p);
    printf("%d\n" ,++*p);
    printf("%d\n" ,++(*p));

    return 0;
}