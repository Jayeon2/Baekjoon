#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count = 0;
    double weight, price, cost_eff, best = 0;

    for (int i = 1; i <= 3; i++) {

        scanf("%lf %lf", &price, &weight);

        price *= 10.0;
        weight *= 10.0;
        if (price >= 5000) {
            price -= 500;
        }

        cost_eff = weight / price;
        if (cost_eff > best) {
            best = cost_eff;
            count += i;
        }
    }

    if (count == 1) {
        printf("S");
    }
    else if (count == 3) {
        printf("N");
    }
    else {
        printf("U");
    }

    return 0;
}