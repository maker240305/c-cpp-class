#include <stdio.h>

int main(){
    double rating;

    scanf("%lf", &rating);

    if (rating >= 4.0) {
        printf("scholarship");
    } else if (rating >= 3.0) {
        printf("next semester");
    } else if (rating >= 2.0) {
        printf("seasonal semester");
    } else {
        printf("retake");
    }

    return 0;
}