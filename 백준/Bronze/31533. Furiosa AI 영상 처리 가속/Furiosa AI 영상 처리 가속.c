#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, n, m;
    scanf("%d", &a);
    scanf("%d %d", &m, &n);

    double big, small, one, two;
    if (n >= m) {
        big = n;
        small = m;
    }
    else {
        big = m;
        small = n;
    }

    one = (small / a) * 2;
    if (big / a >= small) {
        two = (big / a);
    }
    else {
        two = small;
    }

    if (one >= two) {
        printf("%.7lf", two);
    }
    else {
        printf("%.7lf", one);
    }

    return 0;
}