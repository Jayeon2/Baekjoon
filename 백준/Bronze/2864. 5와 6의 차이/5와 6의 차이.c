#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char num1[8], num2[8];
    scanf("%s %s", num1, num2);

    int length1, length2;
    length1 = strlen(num1);
    length2 = strlen(num2);

    int max, min;
    for (int i = 0; i < length1; i++) {
        if (num1[i] == '5') {
            num1[i] = '6';
        }
    }

    for (int i = 0; i < length2; i++) {
        if (num2[i] == '5') {
            num2[i] = '6';
        }
    }

    max = atoi(num1) + atoi(num2);

    for (int i = 0; i < length1; i++) {
        if (num1[i] == '6') {
            num1[i] = '5';
        }
    }

    for (int i = 0; i < length2; i++) {
        if (num2[i] == '6') {
            num2[i] = '5';
        }
    }

    min = atoi(num1) + atoi(num2);

    printf("%d %d", min, max);

    return 0;
}