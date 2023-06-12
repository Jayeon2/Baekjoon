#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n, num, arr[100], sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		scanf("%d", &num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		printf("%d\n", sum);
	}

	return 0; // 프로그램 종료
}
