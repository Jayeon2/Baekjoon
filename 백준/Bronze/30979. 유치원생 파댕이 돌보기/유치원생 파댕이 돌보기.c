#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t, n;
    scanf("%d", &t);
    scanf("%d", &n);

    int f[101], taste = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
        taste += f[i];
    }

    if (taste >= t) {
        printf("Padaeng_i Happy");
    }
    else {
        printf("Padaeng_i Cry");
    }

    return 0;
}