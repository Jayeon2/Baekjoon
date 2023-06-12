#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    double cm, kg, bmi;
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &cm, &kg);
        if (cm < 140.1) {
            printf("6\n");
            continue;
        }
        else if (cm >= 140.1 && cm < 146) {
            printf("5\n");
            continue;
        }
        else if (cm >= 146 && cm < 159 || cm >= 204) {
            printf("4\n");
            continue;
        }

        bmi = kg / ((cm / 100) * (cm / 100));

        if (cm >= 159 && cm < 161) {
            if (bmi >= 16.0 && bmi < 35.0) {
                printf("3\n");
                continue;
            }
            else {
                printf("4\n");
                continue;
            }
        }

        if (cm >= 161 && cm < 204) {
            if (bmi >= 20.0 && bmi < 25.0) {
                printf("1\n");
                continue;
            }
            else if (bmi >= 18.5 && bmi < 20.0 || bmi >= 25.0 && bmi < 30.0) {
                printf("2\n");
                continue;
            }
            else if (bmi >= 16.0 && bmi < 18.5 || bmi >= 30.0 && bmi < 35.0) {
                printf("3\n");
                continue;
            }
            else {
                printf("4\n");
                continue;
            }
        }
    }

    return 0;
}