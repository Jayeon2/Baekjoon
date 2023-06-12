#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, m, new;
    scanf("%d %d", &n, &m);
    new = m;

    int count = 1, book[51] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%d", &book[i]);
    }

    for (int i = 0; i < n; i++) {
        int j = i + 1;
        m -= book[i];
        if (m < book[j]) {
            m = new;
            count++;
        }
    }

    if (n == 0) {
        printf("0");
    }
    else {
        printf("%d", count);
    }

    return 0;
}