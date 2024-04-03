#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, count = 0, j = 0;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++) {
        for (int i = j; i < count; i++) {
            printf(" ");
        }
        for (int i = count; i < (2 * n - 1); i++) {
            printf("*");
        }
        printf("\n");
        j++;
        count += 2;
    }

    count = 1; j = 0;
    for (int i = 0; i < n; i++) {
        for (int i = j; i < ((2 * n - 1) - 1) / 2; i++) {
            printf(" ");
        }
        for (int i = 0; i < count; i++) {
            printf("*");
        }
        count += 2;
        printf("\n");
        j++;
    }

    return 0;
}