#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일
#include <string.h>

int main(void) // 매인 함수 선언
{
	char word[100];
	scanf("%s", &word);
	int length;

	length = strlen(word);

	printf("%d", length);

	return 0; // 프로그램 종료
}