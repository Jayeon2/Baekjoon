#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000004];
    int space = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            space++;
        }
    }

    if (str[0] == ' ') {
        space -= 1;
    }

    int length;
    length = strlen(str);

    if (str[length - 2] == ' ') {
        space -= 1;
    }

    printf("%d", space + 1);

    return 0;
}