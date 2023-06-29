#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);

    if (h == 9 && m == 0) {
        printf("0");
    }
    else {
        h -= 9;
        printf("%d", h * 60 + m);
    }

    return 0;
}