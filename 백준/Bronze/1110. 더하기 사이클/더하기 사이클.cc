#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{  
    int num, count = 1, cycle;
    scanf("%d", &num);
    if (num / 10 + num % 10 >= 10) {
        cycle = (num % 10 * 10) + ((num / 10 + num % 10) % 10);
    }
    else {
        cycle = (num % 10 * 10) + (num / 10 + num % 10);
    }

    do {
        if (cycle / 10 + cycle % 10 >= 10) {
            cycle = (cycle % 10 * 10) + ((cycle / 10 + cycle % 10) % 10);
        }
        else {
            cycle = (cycle % 10 * 10) + (cycle / 10 + cycle % 10);
        }
        count++;
    } while (cycle != num);

    if (num == 0) {
        printf("%d", count-1);
    }
    else {
        printf("%d", count);
    }

    return 0; // 프로그램 종료
}