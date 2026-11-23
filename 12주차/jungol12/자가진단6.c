#include <stdio.h>
#include <string.h>

struct Score {
    char name[21];
    int kor;
    int eng;
};

struct Score plus_(struct Score a, struct Score b) {
    struct Score res;
    strcpy(res.name, "Total");
    res.kor = a.kor + b.kor;
    res.eng = a.eng + b.eng;
    return res;
}

int main() {
    struct Score a, b;

    scanf("%20s %d %d", a.name, &a.kor, &a.eng);
    scanf("%20s %d %d", b.name, &b.kor, &b.eng);

    struct Score result = plus_(a, b);

    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);

    return 0;
}