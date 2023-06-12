#define _CRT_SECURE_NO_WARNINGS // 입력 오류 경고 CRT 표시 억제
#include <stdio.h> // 기본 입,출력 헤드파일

int main(void) // 매인 함수 선언
{
    int n, score = 0;
    int mark[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &mark[i]);
        if(mark[i] == 1) {
                score++;
            }
    }
  
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(mark[i] == 1 && mark[j] == 0) {
                break;
            }
            else if(mark[i] == 1 && mark[j] == 1) {
                score++;
            }
        }   
    }
    printf("%d", score);
    
    return 0; // 프로그램 종료
}