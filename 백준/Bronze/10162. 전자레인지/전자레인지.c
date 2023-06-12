#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int time;
	scanf("%d", &time);

	int a = 0, b = 0, c = 0;
	do {
		if (time >= 300) {
			time -= 300;
			a++;
		}
		if (time < 300 && time >= 60) {
			time -= 60;
			b++;
		}
		if (time < 60 && time >= 10) {
			time -= 10;
			c++;
		}
	} while (time % 10 == 0 && time != 0);

	if (time % 10 != 0) {
		printf("-1");
	}
	else
		printf("%d %d %d", a, b, c);

	return 0; // 프로그램 종료
}