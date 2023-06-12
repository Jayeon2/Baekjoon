#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일
#include <string.h>

int main(void) // 매인 함수 선언
{
	int n, length, count = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char arr[1001] = { 0 };
		length = 0;
		scanf("%s", arr);
		length = strlen(arr);
		printf("%c%c\n", arr[0], arr[length-1]);
	}

	return 0; // 프로그램 종료
}
