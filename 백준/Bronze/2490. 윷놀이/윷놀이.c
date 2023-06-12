#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int stick[4];
	int count0 = 0, count1 = 0;
	for (int i = 0; i < 3; i++) {
		for (int i = 0; i < 4; i++) {
			scanf("%d", &stick[i]);
			if (stick[i] == 0) {
				count0++;
			}
			else if (stick[i] == 1) {
				count1++;
			}
		}
		if (count1 == 3) {
			printf("A\n");
		}
		else if (count0 == count1) {
			printf("B\n");
		}
		else if (count0 == 3) {
			printf("C\n");
		}
		else if (count0 == 4) {
			printf("D\n");
		}
		else if (count1 == 4) {
			printf("E\n");
		}
		count0 = 0;
		count1 = 0;
	}
	
	return 0; // 프로그램 종료
}