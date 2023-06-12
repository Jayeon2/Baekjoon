#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t, c;
    scanf("%d", &t);

    int q = 0, d = 0, n = 0, p = 0;
    for (int i = 0; i < t; i++) {
        c = 0;
        scanf("%d", &c);
        if (c >= 25) {
            q = c / 25;
            c %= 25;
        }
        if (c >= 10) {
            d = c / 10;
            c %= 10;
        }
        if (c >= 5) {
            n = c / 5;
            c %= 5;
        }
        if (c >= 1) {
            p = c / 1;
            c %= 1;
        }
        printf("%d %d %d %d\n", q, d, n, p);
        q = 0, d = 0, n = 0, p = 0;
    }

    return 0;
}