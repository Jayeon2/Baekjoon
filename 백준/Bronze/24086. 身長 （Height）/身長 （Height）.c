#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int before, after;
    scanf("%d", &before);
    scanf("%d", &after);

    printf("%d", after - before);

    return 0;
}