#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int stone;
    scanf("%d", &stone);

    if (stone == 1) {
        printf("CY");
        return 0;
    }
    else if (stone == 2) {
        printf("SK");
        return 0;
    }

    if (stone % 3 == 0 || stone % 3 == 2) {
        if ((stone / 3) % 2 == 0) {
            printf("SK");
        }
        else {
            printf("CY");
        }
    }
    else {
        if ((stone / 3) % 2 == 0) {
            printf("CY");
        }
        else {
            printf("SK");
        }
    }

    return 0;
}