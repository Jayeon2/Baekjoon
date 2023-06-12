#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int money, count = 0;
    scanf("%d", &money);

    money = 1000 - money;

    if (money - 500 > 0) {
        money -= 500;
        count++;
    }

    while (money > 0) {
        if (money - 100 >= 0) {
            money -= 100;
            count++;
        }
        else if (money - 50 >= 0) {
            money -= 50;
            count++;
        }
        else if (money - 10 >= 0) {
            money -= 10;
            count++;
        }
        else if (money - 5 >= 0) {
            money -= 5;
            count++;
        }
        else if (money - 1 >= 0) {
            money -= 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}