#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n;
	int x;

	scanf("%d %d", &n, &x);

	int arr[10000];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x)
		printf("%d ", arr[i]);
	}

	return 0; // 프로그램 종료
}