#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int k;

    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        for (int j = 0; j < k; j++) {
            printf("=");
        }
        printf("\n");
    }

    return 0;
}