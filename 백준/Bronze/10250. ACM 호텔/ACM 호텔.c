#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int test, h, w, n; // h 층, w 방, n 몇 번째 손님인지
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		int y = 1, x = 1;
		scanf("%d %d %d", &h, &w, &n);
		if (n % h != 0) {
			y = (n % h);
		}
		else if (n % h == 0) {
			y = h;
		}
		if (n / h > 0) {
			x += (n / h);
			if (n % h == 0)
				x -= 1;
		}
		if (x >= 10) {
			printf("%d%d\n", y, x);
		}
		else 
			printf("%d0%d\n", y, x);
	}

	return 0; // 프로그램 종료
}