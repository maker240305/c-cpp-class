#include <stdio.h>

struct Rect {
    int x1;
    int y1;
    int x2;
    int y2;
};

int main() {
    struct Rect r1, r2, ans;

    scanf("%d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2);
    scanf("%d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2);

    if (r1.x1 < r2.x1) {
        ans.x1 = r1.x1;
    } else {
        ans.x1 = r2.x1;
    }

    if (r1.y1 < r2.y1) {
        ans.y1 = r1.y1;
    } else {
        ans.y1 = r2.y1;
    }

    if (r1.x2 > r2.x2) {
        ans.x2 = r1.x2;
    } else {
        ans.x2 = r2.x2;
    }

    if (r1.y2 > r2.y2) {
        ans.y2 = r1.y2;
    } else {
        ans.y2 = r2.y2;
    }

    printf("%d %d %d %d\n", ans.x1, ans.y1, ans.x2, ans.y2);

    return 0;
}