#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int snack, num, money;

	scanf("%d %d %d", &snack, &num, &money);

	int price = (snack * num);
	if (price > money)
		printf("%d", (price - money));
	else if (price <= money)
		printf("0");

	return 0; // 프로그램 종료
}