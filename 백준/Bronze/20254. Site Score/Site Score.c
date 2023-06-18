#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
    int ur, tr, uo, to;
    scanf("%d %d %d %d", &ur, &tr, &uo, &to);

    ur *= 56;
    tr *= 24;
    uo *= 14;
    to *= 6;

    printf("%d", ur + tr + uo + to);

    return 0;
}