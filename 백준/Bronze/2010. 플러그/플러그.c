#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int plug, sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &plug);
        sum += plug;
    }

    printf("%d", sum - (n - 1));

    return 0;
}