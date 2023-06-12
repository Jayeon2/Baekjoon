#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    int num = 0, count = 0, j = 1, sum = 0;

    while (num != -1) {
        scanf("%d", &num);
        int divisor[99999] = { 0 };
        j = 1;
        count = 0;
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
                divisor[j] = i;
                count++;
                j++;
            }
        }
        if (sum != num && num != -1) {
            printf("%d is NOT perfect.\n", num);
            sum = 0;
        }
        else if (num != -1) {
            printf("%d =", num);
            j = 1;
            for (int k = 1; k <= count; k++) {
                printf(" %d", divisor[j]);
                if (j == count) {
                    printf("\n");
                    break;
                }
                printf(" +");
                j++;
            }
        }
    }

    return 0;
}