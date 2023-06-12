#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int money, count = 0;
    scanf("%d", &money);

    if (money == 1 || money == 3) {
        printf("-1");
        return 0;
    }

    while (money - 5 >= 0) {
        money -= 5;
        count++;
    }

    if (money == 1 || money == 4) {
        count += 2;
    }
    else if (money == 2) {
        count += 1;
    }
    else if (money == 3) {
        count += 3;
    }

    printf("%d", count);

    return 0;
}