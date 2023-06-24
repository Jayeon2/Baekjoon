#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t, d;
    scanf("%d", &t);

    int max = 0;
    for (int i = 0; i < t; i++) {
        scanf("%d", &d);
        for (int j = 1; ; j++) {
            if (d >= j + j * j) {
                max = j;
            }
            else {
                printf("%d\n", max);
                max = 0;
                break;
            }
        }
    }

    return 0;
}