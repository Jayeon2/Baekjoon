#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char emo[33];
    int length;
    scanf("%s", emo);

    length = strlen(emo);

    int under = 0, difficult = 0;
    for (int i = 0; i < length; i++) {
        if (emo[i] == '_') {
            under++;
        }
    }
    difficult = length + 2 + under * 5;

    printf("%d", difficult);

    return 0;
}