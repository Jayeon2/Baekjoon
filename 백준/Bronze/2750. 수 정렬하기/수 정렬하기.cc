#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n;

	scanf("%d", &n);

	int num[1000];
	int i, j, temp;

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (num[i] > num[j]) {
				(temp = num[i]);
				(num[i] = num[j]);
				(num[j] = temp);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	return 0; // 프로그램 종료
}