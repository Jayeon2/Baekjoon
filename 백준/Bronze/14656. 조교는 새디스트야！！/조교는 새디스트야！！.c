#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int student[20001], hit = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &student[i]);
        if (student[i] != i + 1) {
            hit++;
        }
    }

    printf("%d", hit);

    return 0;
}