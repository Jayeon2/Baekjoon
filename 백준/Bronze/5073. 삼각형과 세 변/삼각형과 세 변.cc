#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
	int side1, side2, side3, max;

	while (1) {
		scanf("%d %d %d", &side1, &side2, &side3);

		max = side1;
		if (side2 >= max) {
			max = side2;
		}
		if (side3 >= max) {
			max = side3;
		}

		if (side1 == side2 && side2 == side3 && side2 != 0) {
			printf("Equilateral\n");
		}
		else if (side1 == 0 && side2 == 0 && side3 == 0) {
			break;
		}
		else if (((max == side1) && (side2 + side3 <= max)) || ((max == side2) && (side1 + side3 <= max)) || ((max == side3) && (side1 + side2 <= max))) {
			printf("Invalid\n");
		}
		else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1)) {
			printf("Isosceles\n");
		}
		else if ((side1 != side2) && (side1 != side3) && (side2 != side3)) {
			printf("Scalene\n");
		}
	}

	return 0; // 프로그램 종료
}