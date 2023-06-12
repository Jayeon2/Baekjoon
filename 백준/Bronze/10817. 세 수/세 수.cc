#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if ((num1 >= num2) && (num2 >= num3)) {
		printf("%d", num2);
	}
	else if ((num1 >= num3) && (num3 >= num2)) {
		printf("%d", num3);
	}
	else if ((num2 >= num1) && (num1 >= num3)) {
		printf("%d", num1);
	}
	else if ((num2 >= num3) && (num3 >= num1)) {
		printf("%d", num3);
	}
	else if ((num3 >= num1) && (num1 >= num2)) {
		printf("%d", num1);
	}
	else if ((num3 >= num2) && (num2 >= num1)) {
		printf("%d", num2);
	}

	return 0; // 프로그램 종료
}