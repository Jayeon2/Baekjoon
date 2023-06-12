#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	char score, mark;
	scanf("%c%c", &score, &mark);

	switch (score) {
	case 'A':
		switch (mark) {
		case '+':
			printf("4.3");
			break;
		case '0':
			printf("4.0");
			break;
		case '-':
			printf("3.7");
			break;
		}
		break;
	case 'B':
		switch (mark) {
		case '+':
			printf("3.3");
			break;
		case '0':
			printf("3.0");
			break;
		case '-':
			printf("2.7");
			break;
		}
		break;
	case 'C':
		switch (mark) {
		case '+':
			printf("2.3");
			break;
		case '0':
			printf("2.0");
			break;
		case '-':
			printf("1.7");
			break;
		}
		break;
	case 'D':
		switch (mark) {
		case '+':
			printf("1.3");
			break;
		case '0':
			printf("1.0");
			break;
		case '-':
			printf("0.7");
			break;
		}
		break;
	default:
		printf("0.0");
		break;
	}

	return 0; // 프로그램 종료
}