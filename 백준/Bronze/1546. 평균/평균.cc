#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n; // 과목 개수

	scanf("%d", &n);

	int arr[1000];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	double fix[1000]; // 나누기 최댓값 * 100을 한 수
	double ave = 0; // 최종평균
	int m = 0; // 최댓값

	for (int i = 0; i < n; i++) {
		if (arr[i] > m)
			m = arr[i];
	}

	for (int i = 0; i < n; i++) {
		fix[i] = ((double)arr[i] / m * 100);
		ave += fix[i];
	}
	
	ave /= n;

	printf("%.2lf", ave);

	return 0; // 프로그램 종료
}