#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	char name[100];
	int age, kg;
	while (1) {
		scanf("%s %d %d", &name, &age, &kg);
		if (age == 0) {
			break;
		}
		if (age > 17 || kg >= 80) {
			printf("%s Senior\n", name);
		}
		else {
			printf("%s Junior\n", name);
		}
	}
	
	return 0; // 프로그램 종료
}