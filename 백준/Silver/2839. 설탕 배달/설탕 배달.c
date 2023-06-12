#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n == 3 || n == 5) {
        printf("1");
        return 0;
    }
    else if (n == 7 || n == 4) {
        printf("-1");
        return 0;
    }

    int count = 0;
    while (n - 5 >= 0) {
        n -= 5;
        count++;
    }
 
    if (n == 1 || n == 3) {
        printf("%d", count + 1);
    }
    else if (n == 2 || n == 4) {
        printf("%d", count + 2);
    }
    else if (n % 3 != 0 || n % 5 != 0) {
        printf("-1");
    }
    else {
        printf("%d", count);
    }

    return 0;
}