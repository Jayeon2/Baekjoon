#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int milk[1001], drink = 0, routine = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &milk[i]);
		if (routine == 0 && milk[i] == 0) {
			routine++;
			drink++;
		}
		if (routine == 1 && milk[i] == 1) {
			routine++;
			drink++;
		}
		if (routine == 2 && milk[i] == 2) {
			routine = 0;
			drink++;
		}
	}

	printf("%d", drink);

	return 0;
}