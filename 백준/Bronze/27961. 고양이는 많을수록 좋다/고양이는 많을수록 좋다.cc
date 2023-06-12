#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	long long cat, temp = 1;
	scanf("%lld", &cat);

	int magic = 1;
	while (temp < cat) {
		temp += temp;
		magic++;
	}
	if (cat == 0) {
		printf("0");
	}
	else {
		printf("%d", magic);
	}
	return 0; // 프로그램 종료
}