#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	int one, ten, hun;
	one = (num2 % 10);
	ten = ((num2 / 10) % 10);
	hun = (num2 / 100);

	printf("%d\n", num1 * one);
	printf("%d\n", num1 * ten);
	printf("%d\n", num1 * hun);
	printf("%d", num1 * num2);
}