#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int n;
	scanf("%d", &n);

	char win;
	int d = 0, p = 0;
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%c", &win);
		if (win == 'D') {
			d++;
		}
		else if (win == 'P') {
			p++;
		}
		if (d - p >= 2 || p - d >= 2) {
			break;
		}
	}
	printf("%d:%d", d, p);

	return 0;
}