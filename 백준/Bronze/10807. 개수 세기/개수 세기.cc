#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n;
	int arr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int v, num = 0;
	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) {
			num += 1;
		}
	}
	printf("%d", num);

	return 0; // 프로그램 종료
}