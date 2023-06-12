#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
    int x, y, w, h, a, b;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    a = w - x;
    b = h - y;

    int min;
    min = x;
    if (y <= min) {
        min = y;
    }
    if (a <= min) {
        min = a;
    }
    if (b <= min) {
        min = b;
    }
    printf("%d", min);

    return 0; // 프로그램 종료
}