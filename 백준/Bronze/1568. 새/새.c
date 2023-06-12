#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
    int bird;
    scanf("%d", &bird);

    int count = 0;
    for (int i = 1; ; i++) {
        if (i > bird) {
            i = 1;
        }
        if (bird == 0) {
            break;
        }
        bird -= i;
        count++;
    }

    printf("%d", count);

    return 0; // 프로그램 종료
}