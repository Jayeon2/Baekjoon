#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int n, k;
    scanf("%d %d", &n, &k);

    int num[10000] = { 0 };
    int j = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            num[j] = i;
            j++;
        }
    }

    printf("%d", num[k]);

    return 0;
}