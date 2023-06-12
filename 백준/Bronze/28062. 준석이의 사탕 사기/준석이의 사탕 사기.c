#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, a[1001];
	scanf("%d", &n);

	int min = 1001, candy = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		candy += a[i];
		if (a[i] % 2 != 0 && a[i] < min) {
			min = a[i];
		}
	}

	if (candy % 2 != 0) {
		candy -= min;
	}

	printf("%d", candy);

	return 0;
}