#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char word[102];
	while (fgets(word, sizeof(word), stdin)) {
		printf("%s", word);
	}

	return 0;
}