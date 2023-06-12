#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int walk, bus, subway;
    scanf("%d %d %d", &walk, &bus, &subway);

    int walksub;
    if (subway >= walk) {
        walksub = subway;
    }
    else if (subway <= walk) {
        walksub = walk;
    }

    if (walk > subway || bus < walksub) {
        printf("Bus");
    }
    else if (bus > walksub) {
        printf("Subway");
    }
    else {
        printf("Anything");
    }

    return 0;
}