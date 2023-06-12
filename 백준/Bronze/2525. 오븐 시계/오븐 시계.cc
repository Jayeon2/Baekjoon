#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int h, m, time;

	scanf("%d %d", &h, &m);
	scanf("%d", &time);

	m += time;

	while (m >= 60) {
		(m -= 60);
		(h += 1);
	if (h >= 24) 
		(h = 0);
	}

	printf("%d %d", h, m);

	return 0; // 프로그램 종료
}