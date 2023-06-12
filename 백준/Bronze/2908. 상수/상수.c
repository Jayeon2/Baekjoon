#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int a, b;
	scanf("%d %d", &a, &b);

	int a1, a2, a3, b1, b2, b3;
	a1 = a / 100;
	a2 = a % 100 / 10;
	a3 = a % 10;
	b1 = b / 100;
	b2 = b % 100 / 10;
	b3 = b % 10;
	
	int sa, sb;
	sa = (a3 * 100 + a2 * 10 + a1);
	sb = (b3 * 100 + b2 * 10 + b1);

	if (sa >= sb) {
		printf("%d", sa);
	}
	else
		printf("%d", sb);

	return 0; // 프로그램 종료
}