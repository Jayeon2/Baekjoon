#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long long n, m, r;
    scanf("%lld %lld", &n, &r);

    m = n - r;
    if (r > m) {
        printf("0");
        return 0;
    }

    long long sum = 0;

    for (long long i = 1; i * i <= m; i++) {
        if (m % i == 0) {         
            if (i > r) {
                sum += i;
            }
            if (i * i == m) {
                break;
            }
            if (m / i > r) {
                sum += m / i;
            }
        }
    }

    printf("%lld", sum);

    return 0;
}