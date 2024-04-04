#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int n, m, c1, c2, temp, basket[101];
    scanf("%d %d", &n, & m);

    for (int i = 1; i <= n; i++) {
        basket[i] = i;
    }

    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &c1, &c2);
        temp = basket[c1];
        basket[c1] = basket[c2];
        basket[c2] = temp;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}