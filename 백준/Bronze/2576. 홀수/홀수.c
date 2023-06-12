#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int min = 100, sum = 0, num[7];
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num[i]);
		if (num[i] % 2 != 0) {
			sum += num[i];
			if (num[i] < min)
				min = num[i];
		}
	}
	if (sum != 0) {
		printf("%d\n", sum);
		printf("%d", min);
	}
	else {
		printf("-1");
	}

	return 0; // 프로그램 종료
}