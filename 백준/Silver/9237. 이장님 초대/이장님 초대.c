#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const int* a, const int* b) {
    return(*b - *a);
}

int main(void)
{
    int seed;
    scanf("%d", &seed);

    int day[100001];
    for (int i = 0; i < seed; i++) {
        scanf("%d", &day[i]);
    }

    qsort(day, seed, sizeof(int), compare);

    int max = 0;
    for (int i = 0; i < seed; i++) {
        if (day[i] + (i + 1) + 1 > max) {
            max = day[i] + (i + 1) + 1;
        }
    }

    printf("%d", max);

    return 0;
}