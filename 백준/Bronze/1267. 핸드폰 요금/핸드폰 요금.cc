#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
    int n, call[99999];
    scanf("%d", &n);

    int y, m, Y = 0, M = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &call[i]);
        y = call[i] / 30;
        if (y == 0) {
            y += 1;
        }
        if (call[i] % 30 != 0 && call[i] / 30 >= 1) {
            y += 1;
        }
        if (call[i] % 30 == 0) {
            y += 1;
        }
        Y += y;

        m = call[i] / 60;
        if (m == 0) {
            m += 1;
        }
        if (call[i] % 60 != 0 && call[i] / 60 >= 1) {
            m += 1;
        }
        if (call[i] % 60 == 0) {
            m += 1;
        }
        M += m;
    }
    Y *= 10;
    M *= 15;
    if (Y > M) {
        printf("M %d", M);
    }
    if (Y < M) {
        printf("Y %d", Y);
    }
    if (Y == M) {
        printf("Y M %d", M);
    }

    return 0; // 프로그램 종료
}