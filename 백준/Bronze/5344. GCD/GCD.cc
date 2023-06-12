#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
    int n;
    long long a, b, max, min, gcd, temp; // gcd = 최대공약수
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &a, &b);
        max = a;
        min = b;
        if (max <= b) {
            max = b;
        }
        if (min >= a) {
            min = a;
        }
        if (max % min == 0) {
            gcd = min;
        }
        else if (max % min != 0) {
            do {
                temp = min;
                min = max % min;
                max = temp;
            } while (max % min != 0);
            gcd = min;
        }
        printf("%lld\n", gcd);
    }

    return 0; // 프로그램 종료
}