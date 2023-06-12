#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int high, front = 0, push = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &high);
		if (front > high) {
			push--;
		}
		front = high;
		push++;
	}
	printf("%d", push);

	return 0;
}