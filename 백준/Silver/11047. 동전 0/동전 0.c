#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int coin[11];
    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }

    int count = 0, length = n - 1;

    while (k > 0) {
        if (k >= coin[length]) {
            k -= coin[length];
            count++;
        }
        else {
            length--;
        }
    }

    printf("%d", count);

    return 0;
}