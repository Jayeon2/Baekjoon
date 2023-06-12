#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int n, appro = 0, reject = 0, invalid = 0, arr[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) {
			appro++;
		}
		if (arr[i] == -1) {
			reject++;
		}
		if (arr[i] == 0) {
			invalid++;
		}
	}
	if (appro + reject <= invalid)
		printf("INVALID");
	else if (reject >= appro)
		printf("REJECTED");
	else if (appro > reject)
		printf("APPROVED");

	return 0; // 프로그램 종료
}