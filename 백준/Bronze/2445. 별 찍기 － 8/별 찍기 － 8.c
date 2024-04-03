#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, count = 1, star = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int i = star; i < count; i++) {
            printf("*");
        }
        for (int i = count - 1; i < (n * 2 - 2); i++) {
            printf(" ");
        }
        for (int i = star; i < count; i++) {
            printf("*");
        }
        printf("\n");
        count += 2;
        star++;
    }

    star = 1; count = 2;
    for (int i = 0; i < n - 1; i++) {
        for (int i = 0; i < (n - star); i++) {
            printf("*");
        }
        for (int i = 0; i < count; i++) {
            printf(" ");
        }
        for (int i = 0; i < (n - star); i++) {
            printf("*");
        }
        printf("\n");
        star++;
        count += 2;
    }

    return 0;
}