#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int arr[10001] = { 0 };
	int size, num;
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &num);
		arr[num] += 1;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i);
	}

	return 0; // 프로그램 종료
}