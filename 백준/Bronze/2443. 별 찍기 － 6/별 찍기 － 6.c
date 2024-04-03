#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, count = 0, j = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
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

    return 0;
}