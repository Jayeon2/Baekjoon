#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);

	if ((x > 0) && (y > 0))
		printf("%d", 1);
	else if ((x < 0) && (y > 0))
		printf("%d", 2);
	else if ((x < 0) && (y < 0))
		printf("%d", 3);
	else if ((x > 0) && (y < 0))
		printf("%d", 4);

	return 0; // 프로그램 종료
}