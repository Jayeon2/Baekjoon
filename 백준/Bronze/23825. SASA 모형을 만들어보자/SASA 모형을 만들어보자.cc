#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	int s;
	int a;

	s = n / 2;
	a = m / 2;

	if (s >= a) {
		printf("%d", a);
	}
	else if (a >= s) {
		printf("%d", s);
	}

	return 0; // 프로그램 종료
}