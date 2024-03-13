#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char word[1001];
    int place;

    fgets(word, sizeof(word), stdin);
    scanf("%d", &place);

    printf("%c", word[place - 1]);

    return 0;
}