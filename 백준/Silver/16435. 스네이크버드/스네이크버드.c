#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int fruit, length;
    scanf("%d %d", &fruit, &length);

    int eat[10001];
    for (int i = 0; i < fruit; i++) {
        scanf("%d", &eat[i]);
    }
    
    int temp = 0;
    for (int i = 0; i < fruit; i++) {
        for (int j = i + 1; j < fruit; j++) {
            if (eat[i] > eat[j]) {
                temp = eat[i];
                eat[i] = eat[j];
                eat[j] = temp;
            }
        }
    }

    for (int i = 0; i < fruit; i++) {
        if (eat[i] <= length) {
            length++;
        }
        else
            break;
    }
    printf("%d", length);

    return 0;
}