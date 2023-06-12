#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int time, alcohol;

	scanf("%d %d", &time, &alcohol);

	if ((time >= 12) && (time <= 16) && (alcohol == 0))
		printf("320");
	else
		printf("280");
		
	return 0; // 프로그램 종료
}