#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int day, count = 0;
	int car[5];

	scanf("%d", &day);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (day == car[i]) {
			count++;
		}
	}
	printf("%d", count);

	return 0; // 프로그램 종료
}