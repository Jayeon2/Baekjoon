#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int chicken, coke, beer, eat = 0;
	scanf("%d", &chicken);
	scanf("%d %d", &coke, &beer);

	while (1) {
		if (chicken == 0 || (chicken > 0 && coke < 2 && beer == 0)) {
			break;
		}
		if (chicken > 0 && coke > 1) {
			(chicken -= 1);
			(coke -= 2);
			eat++;
		}
		if (chicken > 0 && beer > 0) {
			(chicken -= 1);
			(beer -= 1);
			eat++;
		}
	}
	printf("%d", eat);

	return 0; // 프로그램 종료
}