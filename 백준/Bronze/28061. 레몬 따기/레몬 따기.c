#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int tree, lemon, max = 0;

	scanf("%d", &tree);

	int move = tree;
	for (int i = 0; i < tree; i++) {
		scanf("%d", &lemon);
		lemon -= move;
		move--;
		if (lemon >= max) {
			max = lemon;
		}
	}

	printf("%d", max);

	return 0;
}