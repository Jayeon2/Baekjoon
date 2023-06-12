#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n, num = 0;
	char pwd[1000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", pwd);
		num = 0;	// 0으로 초기화 하지 않으면 값이 쌓임

		while (pwd[num] != '\0') // '\0'은 문자열 끝을 나타내는 문자임 문자열의 끝이 아니면 반복
			num++;

		if ((6 <= num) && (num <= 9))
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0; // 프로그램 종료
}