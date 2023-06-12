#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int price[5];

	for (int i = 0; i < 5; i++) {
		scanf("%d", &price[i]);
	}

	int min1 = price[0];

	for (int i = 0; i < 5; i++) {
		if (min1 >= price[1])
			min1 = price[1];
		if (min1 >= price[2])
			min1 = price[2];
	}

	int min2 = price[3];

	for (int i = 0; i < 5; i++) {
		if (min2 >= price[4])
			min2 = price[4];
	}

	printf("%d", (min1+min2)-50);

	return 0; // 프로그램 종료
}