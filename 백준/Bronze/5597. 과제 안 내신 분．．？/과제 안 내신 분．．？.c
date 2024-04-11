#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int num[31] = { 0 }, empty;

    for (int i = 1; i <= 28; i++) {
        scanf("%d", &empty);
        num[empty] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (num[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}