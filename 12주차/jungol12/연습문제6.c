#include <stdio.h>

struct Jp{
    float x;
    float y;
};

int main(){
    struct Jp one;
    struct Jp two;
    struct Jp cen;

    scanf("%f %f", &one.x, &one.y);
    scanf("%f %f", &two.x, &two.y);

    cen.x = (one.x + two.x) / 2;
    cen.y = (one.y + two.y) / 2;

    printf("Center point = (%.1f, %.1f)",cen.x,cen.y);

    return 0;
}