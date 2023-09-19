#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int solve, union_level, level;
    scanf("%d %d %d", &solve, &union_level, &level);

    if ((solve >= 1000) && (union_level >= 8000 || level >= 260)) {
        printf("Very Good");
    }
    else if (solve >= 1000) {
        printf("Good");
    }
    else {
        printf("Bad");
    }

    return 0;
}