#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int people;
    scanf("%d", &people);

    int min[1001];
    for (int i = 0; i < people; i++) {
        scanf("%d", &min[i]);
    }

    int temp = 0;
    for (int i = 0; i < people; i++) {
        for (int j = i + 1; j < people; j++) {
            if (min[i] > min[j]) {
                temp = min[i];
                min[i] = min[j];
                min[j] = temp;
            }
        }
    }

    int time = 0, p = 0;
    for (int i = 0; i < people; i++) {
        time += min[i] * (people - p);
        p++;
    }

    printf("%d", time);

    return 0;
}