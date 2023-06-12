#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num[11];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += num[i];
    }

    int result = sum / 10;
    int max = 0, count = 0, temp = 0;

    for (int i = 0; i < 10; i++) {
        temp = 1;
        for (int j = i + 1; j < 10; j++) {
            if (num[i] == num[j]) {
                temp++;
            }
            if (temp > count) {
                count = temp;
                max = num[i];
            }
        }
    }

    printf("%d\n%d", result, max);

    return 0;
}