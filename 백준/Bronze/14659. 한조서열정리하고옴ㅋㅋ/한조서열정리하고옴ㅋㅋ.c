#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int mountain[30001] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%d", &mountain[i]);
    }

    int kill = 0, max = 0;
    for (int i = 0; i < n; i++) {
        kill = 0;
        for (int j = i + 1; j < n; j++) {
            if (mountain[i] > mountain[j]) {
                kill++;
                if (kill > max) {
                    max = kill;
                }
            }
            else {
                break;
            }
        }
    }

    printf("%d", max);

    return 0;
}