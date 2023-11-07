#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int s, d, i, l, n;
    scanf("%d %d %d %d %d", &s, &d, &i, &l, &n);

    int count = 0;
    while (1) {
        int avg = (s + d + i + l) / 4;
        if (avg >= n) {
            break;
        }
        else {
            s++;
            count++;
        }
    }

    printf("%d", count);

    return 0;
}