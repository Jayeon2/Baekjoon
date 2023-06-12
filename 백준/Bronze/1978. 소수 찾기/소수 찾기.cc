#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n, num;
	scanf("%d", &n);
	int count = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 1) {
			count -= 1;
		}
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				count -= 1;
				break;
			}
		}
	}
	printf("%d", count);

	return 0; // 프로그램 종료
}