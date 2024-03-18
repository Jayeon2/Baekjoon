#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        int score[1001], sum = 0, ave;
        for (int i = 0; i >= 0; i++) {
            scanf("%d", &score[i]);
            sum += score[i];
            if (i == score[0]) {
                break;
            }
        }
        ave = (sum - score[0]) / score[0];
        double up = 0;
        for (int i = 1; i >= 1; i++) {
            if (score[i] > ave) {
                up++;
            }
            if (i == score[0]) {
                break;
            }
        }
        double percent = ((up * 1.0) / score[0]) * 100;
        printf("%.3lf%%\n", percent);
    }

    return 0;
}