#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int f, s, t;
    scanf("%d", &t);
    scanf("%d", &s);

    f = s + (s - t);
    printf("%d", f);

    return 0;
}