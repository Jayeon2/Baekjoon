#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	long long num;
	scanf("%lld", &num);

	long long sum = 0, count = 0;
	for (long long i = 1; sum <= num; i++) {
		sum += i;
		count++;
	}
	printf("%lld", count-1);

	return 0; // 프로그램 종료
}