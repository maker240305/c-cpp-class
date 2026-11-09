#include <stdio.h>

int main(void) {
    int count[26] = {0};
    char ch;

    while (1) {
        scanf(" %c", &ch);
        if (ch < 'A' || ch > 'Z') {
            break;
        }
        count[ch - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
