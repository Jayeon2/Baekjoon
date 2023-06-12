#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n;
	scanf("%d", &n);

	int a, b, aw = 0, bw = 0;
	for (int i = 0; i < n; i++) {
		a = 0, b = 0;
		scanf("%d %d", &a, &b);
		if (a > b) {
			aw++;
		}
		else if (b > a) {
			bw++;
		}
	}
	printf("%d %d", aw, bw);

	return 0; // 프로그램 종료
}