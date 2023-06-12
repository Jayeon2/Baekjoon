#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int sa, sb, sc;
    scanf("%d %d %d", &sa, &sb, &sc);

    int n;
    scanf("%d", &n);

    int a, b, c;
    int count = 0, score = 0, max = 0;
    for (int i = 0; i < n * 3; i++) {
        scanf("%d %d %d", &a, &b, &c);
        count++;
        if (count <= 3) {
            score += (a * sa + b * sb + c * sc);
            if (score > max) {
                max = score;
            }
            if (count == 3) {
                score = 0;
                count = 0;
            }
        }
    }

    printf("%d", max);

    return 0;
}