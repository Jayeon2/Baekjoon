#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int chicken, a, b, c;
    scanf("%d", &chicken);
    scanf("%d %d %d", &a, &b, &c);
    int people = 0;
    if (a >= chicken) {
        people += chicken;
    }
    if (b >= chicken) {
        people += chicken;
    }
    if (c >= chicken) {
        people += chicken;
    }
    if (a < chicken) {
        people += a;
    }
    if (b < chicken) {
        people += b;
    }
    if (c < chicken) {
        people += c;
    }
    printf("%d", people);

    return 0;
}