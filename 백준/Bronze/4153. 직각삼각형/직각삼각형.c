#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		if (((b * b + c * c) == a * a) || ((a * a + c * c) == b * b) || ((a * a + b * b) == c * c)) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}

	return 0; // 프로그램 종료
}