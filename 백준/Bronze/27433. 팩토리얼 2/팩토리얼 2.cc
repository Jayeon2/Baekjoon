#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n;
	long long factorial = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	printf("%lld", factorial);
			
	return 0; // 프로그램 종료
}