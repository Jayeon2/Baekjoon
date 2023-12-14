#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int y, m, d, n;

    scanf("%d-%d-%d", &y, &m, &d);
    scanf("%d", &n);

    int temp_y, temp_m, temp_d;
    temp_y = n / 360;
    temp_m = n % 360 / 30;
    temp_d = n % 30;

    y += temp_y;
    m += temp_m;
    d += temp_d;

    if (d > 30) {
        d %= 30;
        m++;
    }

    if (m > 12) {
        m %= 12;
        y++;
    }

    printf("%d-%02d-%02d", y, m, d);

    return 0;
}